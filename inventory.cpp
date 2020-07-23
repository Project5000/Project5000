///this file contains some of the basic datastructures and functions required for the managment of the player inventory

//TO DO rework protection of the members of this file
using std;

/// <summary>
/// 
/// </summary>
public struct item{
	int id;	
	string name;
	string desciption;//a short description of the item
	string defaultData;//stores the base data for every time this item is generated DO NOT READ WHEN CHEKING INVENTORY
	string tags;//contains a list of varius tag associated with an item ex is_weapon or is_food
};


//TO DO text parser for loading at the game start
item[] itemlist;//contains the list of all items programmed in the game and that the player can obtain
item[] moddeditems//for eventual future support of mods
/// <summary>
/// manages a single slot of the inventory
/// </summary>
public class slotInventory {
	public item* item;//stores the the item contined the value 0 rapresent a free slot .take it from the items list DO NOT GENERATE A NEW ISTANCE
	public int quantity;
	public int space_used;//for the possibility of taking in consideration the size of objects 
	public bool stackable;
	//TO DO replace data with a dictionary key->value for the item variables
	public string data;// used for additional informations about the item ex durabiity or ammunitions 

};
/// <summary>
/// manages the entirety of the inventory
/// </summary>
public class inventory {//TO DO text parser for loading at the game start //TO DO complete functions //TODO add clone function for lastinventory

	int space_used;//for the possibility of taking in consideration the size of objects 
	int space_available;//for the possibility of taking in consideration the size of objects
	int max_space_available;
	slotInventory* slots;// this points to either an array or a linked list depending if we opt to a fix or variable number of slots in the inventory
	slotInventory* equipped;//pointer to the object currently equipped
	/// <summary>
	/// allows to insert one or more objects into the inventory
	/// </summary>
	/// <param name="input">itmens to add</param>
	/// <returns>true for succsesfull operation</returns>
	bool insert(slotInventory* input) {
		if (space_available < (input->space_used)) {
			return false;
		}
		if (!(input->stackable)) {
			//TODO check all slots until one completely free
			space_available -= (input->space_used);
			space_used += (input->space_used);
			slotInventory* chosen_slot = input;
			return true;
		}
		else {
			//TODO check all slots until one with the same item and enught space
			space_available -= (input->space_used);
			space_used += (input->space_used);
			slotInventory* chosen_slot = 0;
			chosen_slot->quantity += input->quantity;
			chosen_slot->space_used += input->space_used;
			return true;
		}
	}
	/// <summary>
	/// used for deletion of an item for partial removal use removeamount
	/// </summary>
	/// <param name="slot">slot on wich do operate</param>
	void remove(slotInventory* slot) {
		space_available += (slot->space_used);
		space_used -= (slot->space_used);
		slot->itme = null;
		slot->quantity = 0;
		slot->space_used = 0;
		slot->stackable = true;
		slot->data = null;
	}
	/// <summary>
	/// used to extract a certain quantiy from a slot
	/// </summary>
	/// <param name="slot">slot on wich do operate</param>
	/// <param name="quantity">quantity to extract</param>
	/// <returns>returns null for invalid operation otherwise a slot containing the item and it's info</returns>
	slotInventory* remove_amount(slotInventory* slot, int quantity) {
		if (!slot->stackable || quantity == slot->quantity) {
			//TO DO clone slot applly remove to the original and return the copy
		}
		if (slot->quantity < quantity)
		{
			return null;
		}
		slotInventory* result = new slotInventory();
		result->item = slot->item;
		result->space_used = (slot->space_used / slot->quantity) * quantity;//TO DO define the way used space is computed
		result->quantity = quantity;
		slot->quantity -= quantity;
		slot->space_used += result->space_used;
		result->stackable = true;
		result->data = slot->data;
		space_available += (result->space_used);
		space_used -= (result->space_used);
	}
	/// <summary>
	/// serializes the entire inventory into a string used for savefile or to be sent over network
	/// </summary>
	/// <returns>rappresentation of the inventory in a serialized string form</returns>
	string serialize() {
		string result = space_used + ";" + max_space_available + ";\r\n";
		while (true)//TO DO Scan the inventory set "current" to the current slot to serialize
		{
			//TO DO mark or skip empty slots
			//TO DO use more efficient string builder
			slotInventory* current = 0;
			string currentstr = current->item->id + ";" + current->quantity + ";" + current->space_used + ";" + current->stackable + ";" + current->data + "\r\n";
			result += currentstr;
		}
	}
	/// <summary>
	/// initializes the inventory to be called on savefile load
	/// </summary>
	/// <param name="savefile">savefile from wich to pick the inventory</param>
	/// <returns>eventual errors</returns>
	public string initialize(string savefile) {
		//TODO load inventory
	}
	/// <summary>
	/// colones the inventory
	/// </summary>
	/// <returns>copy of the original</returns>
	public inventory clone() {

	}
};
const string itemsurce//contains the location of the file containing the list of itmes
inventory* last_inventory;//used for faster reload of the last save
inventory* current_inventory;// inventory on wich the game operates

/// <summary>
/// used to load a save
/// </summary>
/// <param name="surce"></param>
/// <returns></returns>
public string load_save(string surce) {
	last_inventory = new inventory();
	string msg = last_inventory.initialize(surce);
	if ( msg!= null) {
		return msg;
	}
	current_inventory = last_inventory.clone();
}
/// <summary>
/// used to quickly load the last save ex player just died
/// </summary>
/// <returns></returns>
public string quick_load_save() {//TO DO deallocate current_inventory before replacing it
	if (!last_inventory) {
		return "unable to load no previus save loaded";
	}
	current_inventory = last_inventory.clone();
}
/// <summary>
/// saves the current proggress
/// </summary>
/// <returns></returns>
public string save() {//TO DO deallocate last_inventory before replacing it
	if (!current_inventory) {
		return "unable to save inventory missing";
	}
	last_inventory = current_inventory.clone();
	//TODO write to file;
}

/// <summary>
/// loads all items it must be calles on the game start
/// </summary>
/// <returns>eventual errors</returns>
public string initialize() {
	//TODO loat items
}


