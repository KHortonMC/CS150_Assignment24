#include <iostream>
#include "Surfboard.h"
#include "SurfboardList.h"
using namespace std;

int main()
{
	// todo: SurfboardList inventory;
	string brand, model;
	double length, width, thickness, price;
	int id, quantity;

	int choice = 0;

	do {
		cout << "************************************************************************\n";
		cout << "**                                                                    **\n";
		cout << "**                          WELCOME TO THE                            **\n";
		cout << "**                          SURFBOARD SHOP                            **\n";
		cout << "**                                                                    **\n";
		cout << "************************************************************************\n";
		cout << "** Please make a choice from the following options:                   **\n";
		cout << "** 1)  Add a new Surfboard to Inventory                               **\n";
		cout << "** 2)  Remove a Surfboard from Inventory                              **\n";
		cout << "** 3)  Display all Surfboards in Inventory                            **\n";
		cout << "** 4)  Exit                                                           **\n";
		cout << "************************************************************************\n";
		cout << ">> ";
		cin >> choice;
    
		cin.ignore(); // To ignore the \n after choice (preventing brand from being "\n")
        string hold;

		switch (choice)
		{
		case 1:
		{
			cout << "Enter Brand: ";
			getline(cin, brand);
			cout << "Enter Model: ";
			getline(cin, model);
			cout << "Enter Length: ";
			cin >> length;
			cout << "Enter Width: ";
			cin >> width;
			cout << "Enter Thickness: ";
			cin >> thickness;
			cout << "Enter Quantity: ";
			cin >> quantity;
			cout << "Enter Price $";
			cin >> price;

			Surfboard board(brand, model, length, width, thickness, quantity, price);
			// todo: inventory.addBoard(board);

			cout << endl;
			break;
		}
		case 2:
			// todo: cout << inventory << endl;
			cout << "\nWhich ID# would you like to remove? (or -1 to cancel) >> ";
			cin >> id;
			// todo: if (inventory.removeBoard(id)) {
		        	cout << "~~~Surfboard #" << id << " removed successfully~~~\n\n";
			} else {
			        cout << "~~~Surfboard #" << id << " not found\n\n";
			}
			
			break;
		case 3:
			// todo: cout << inventory;
            cout << "\nPress Enter to Continue\n";
			getline(cin, hold);
			break;
		case 4:
			cout << "Aloha, enjoy the ride!!!\n";
			break;
		}

	} while (choice != 4);
	
  
	return EXIT_SUCCESS;
}
