// Write a program to Create inventory management system.
#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct Item {
    string name;
    int quantity;
    double price;
};

int main() {
    vector<Item> inventory;

    int choice;
    do {
        cout << "\nInventory Management System\n";
        cout << "1. Add Item\n";
        cout << "2. Display Inventory\n";
        cout << "3. Search Item\n";
        cout << "4. Update Item\n";
        cout << "5. Delete Item\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                Item newItem;
                cout << "Enter item name: ";
                cin.ignore();
                getline(cin, newItem.name);
                cout << "Enter quantity: ";
                cin >> newItem.quantity;
                cout << "Enter price: ";
                cin >> newItem.price;
                inventory.push_back(newItem);
                cout << "Item added successfully!\n";
                break;
            }
            case 2:
                if (inventory.empty()) {
                    cout << "Inventory is empty.\n";
                } else {
                    cout << "\nInventory:\n";
                    for (const auto& item : inventory) {
                        cout << "Name: " << item.name << ", Quantity: " << item.quantity << ", Price: $" << item.price << endl;
                    }
                }
                break;
            case 3: {
                string searchName;
                cout << "Enter item name to search: ";
                cin.ignore();
                getline(cin, searchName);
                bool found = false;
                for (const auto& item : inventory) {
                    if (item.name == searchName) {
                        cout << "Item found:\n";
                        cout << "Name: " << item.name << ", Quantity: " << item.quantity << ", Price: $" << item.price << endl;
                        found = true;
                        break;
                    }
                }
                if (!found) {
                    cout << "Item not found.\n";
                }
                break;
            }
            case 4: {
                string updateName;
                cout << "Enter item name to update: ";
                cin.ignore();
                getline(cin, updateName);
                bool found = false;
                for (auto& item : inventory) {
                    if (item.name == updateName) {
                        cout << "Enter new quantity: ";
                        cin >> item.quantity;
                        cout << "Enter new price: ";
                        cin >> item.price;
                        cout << "Item updated successfully!\n";
                        found = true;
                        break;
                    }
                }
                if (!found) {
                    cout << "Item not found.\n";
                }
                break;
            }
            case 5: {
                string deleteName;
                cout << "Enter item name to delete: ";
                cin.ignore();
                getline(cin, deleteName);
                bool found = false;
                for (auto it = inventory.begin(); it != inventory.end(); ++it) {
                    if (it->name == deleteName) {
                        inventory.erase(it);
                        cout << "Item deleted successfully!\n";
                        found = true;
                        break;
                    }
                }
                if (!found) {
                    cout << "Item not found.\n";
                }
                break;
            }
            case 6:
                cout << "Exiting...\n";
                break;
            default:
                cout << "Invalid choice! Please try again.\n";
        }
    } while (choice != 6);

    return 0;
}
