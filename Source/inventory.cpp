///this file contains some of the basic datastructures and functions required for the managment of the player inventory

//TO DO rework protection of the members of this file
using std;


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

public class slotInventory {
	public item* item;//stores the the item contined the value 0 rapresent a free slot .take it from the items list DO NOT GENERATE A NEW ISTANCE
	public int quantity;
	public int space_used;//for the possibility of taking in consideration the size of objects 
	public bool stackable;
	//TO DO replace data with a dictionary key->value for the item variables
	public string data;// used for additional informations about the item ex durabiity or ammunitions 

};

public class inventory {//TO DO text parser for loading at the game start //TO DO complete functions

	int space_used;//for the possibility of taking in consideration the size of objects 
	int space_available;//for the possibility of taking in consideration the size of objects
	int max_space_available;
	slotInventory* slots;// this points to either an array or a linked list depending if we opt to a fix or variable number of slots in the inventory
	slotInventory* equipped;//pointer to the object currently equipped
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
	void remove(slotInventory* slot) {//used for complete removal of an item for partial removal use removeamount
		space_available += (slot->space_used);
		space_used -= (slot->space_used);
		slot->itme = null;
		slot->quantity = 0;
		slot->space_used = 0;
		slot->stackable = true;
		slot->data = null;
	}
	slotInventory* remove_amount(slotInventory* slot, int quantity) {//returns null for invalid operation
		if (!slot->stackable || quantity == slot->quantity) {
			//TO DO clone slot applly remove to the original and return the copy
		}
		if (slot->quantity < quantity)
		{
			return null;
		}
		slotInventory* result = new slotInventory();
		result->item = slot->item;
		result->space_used = (slot->space_used/slot->quantity)*quantity;//TO DO define the way used space is computed
		result->quantity = quantity;
		slot->quantity -= quantity;		
		slot->space_used += result->space_used;
		result->stackable = true;
		result->data = slot->data;
		space_available += (result->space_used);
		space_used -= (result->space_used);
	}
	string serialize() {
		string file = space_used + ";" + max_space_available + ";\r\n";
		while (true)//TO DO Scan the inventory set "current" to the current slot to serialize
		{
			//TO DO mark or skip empty slots
			//TO DO use more efficient string builder
			slotInventory* current = 0;
			string currentstr = current->item->id + ";" + current->quantity + ";" + current->space_used + ";" + current->stackable + ";" + current->data + "\r\n";
			file += currentstr;
		}
	}
};

