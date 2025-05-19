#include<iostream>

using namespace std;

#define MAX 100
int Count =0 ;

void Menu();
int addItem();
int displayItem();
int searchItem();
int updateItem();
int deleteItem();

 typedef struct Inventorylist
{
	int id;
	int qty;
	float price;
	string name;
}inv;

inv n[MAX];

void Menu() 
{  
    cout << "\n=== INVENTORY SYSTEM ===\n";
           cout<< "1. Add Items\n";
           cout << "2. View/Display Items\n";
           cout << "3. Search Items\n";
           cout << "4. Update Items\n";
           cout << "5. Delete Items\n";
           cout << "6. Exit!\n";
}

int addItem()
{
    cout << "How many items are you planning to add?\n";
    cin >> Count;
    if (Count > MAX)
    {
        cout << "The Inventory is Full!!!";
        return 0;
    }

    for (int i = 0; i < Count; i++) 
    {
        cout << "\nPlease enter details for Item number" << i + 1 << " \n";
        cout << "ID: "; cin >> n[i].id;
        cout << "Name: "; cin>>n[i].name;
        cout << "Qty: "; cin >> n[i].qty;
        cout << "Price is"; cin >> n[i].price;
    }
}

int displayItem()
{
    if (Count == 0) {
        cout << "No items to display!,please add the items first !\n";
        return 0;
    }

    cout << "\n=== YOUR INVENTORY items are as follows===\n";
    for (int i = 0; i < Count; i++) 
    {
        cout << "ID: " << n[i].id<<endl;
        cout << " NAME " << n[i].name << endl;
        cout << " Quantity " << n[i].qty << endl;
            cout << " Price=" << n[i].price << endl;
    }

    return 0;
}

int searchItem()
{
    bool found = false;
    if (Count == 0) {
        cout << "Sorry your Inventory is empty!\n";
        return 0;
    }

    int searchId;
    cout << "Enter item ID to search";
    cin >> searchId;

    for (int i = 0; i < Count; i++)
    {
        if (searchId ==n[i].id)
        {
            cout << "\nItem Found!!" << endl;
            cout << "\nID is " << n[i].id << endl;
            cout << "\nName is " << n[i].name << endl;
            cout << "\nQty " << n[i].qty << endl;
            cout << "\nPrice is" << n[i].price << endl;
            found = true;
            break;
        }
    }
       if(found==false)
            cout << "Item not found!\n";
        return 0;
    
}

int updateItem()
{
    if (Count == 0)
    {
        cout << "Inventory is empty!\n";
        return 0;
    }

    int updateId;
    cout << "Enter item ID to update ";
    cin >> updateId;

    for (int i = 0; i < Count; i++)
    {
        if (updateId == n[i].id)
        {
            cout << "Enter new name ";
            cin >> n[i].name;
            cout << "Enter new qty";
            cin >> n[i].qty;
            cout << "Enter new price";
            cin >> n[i].price;
            cout << "Item updated!\n";

        }
        else
            cout << "Item not found!\n";

        return 0;
    }
}

int deleteItem()
{
    if (Count == 0) 
    {
        cout << "Inventory is empty!\n";
        return 0;
    }

    int deleteId;
    int foundIndex = -1;
    cout << "Enter item ID to delete";
    cin >> deleteId;

    for (int i = 0; i < Count; i++)
    {
        if (n[i].id == deleteId)
        {
            foundIndex = i;
            break;
        }
    }
    if (foundIndex == -1) 
    {
        cout << "Item not found!\n";
        return 0;
    }
    // Shift items left
    for (int i = foundIndex; i < Count - 1; i++)
    {
        n[i] = n[i + 1];
    }
    Count--;
    cout << "Item deleted!\n";
}



int main() 
{
    int choice;
    do
    {
        Menu();
        cin >> choice;

        switch (choice) {
        case 1: addItem(); break;
        case 2: displayItem(); break;
        case 3: searchItem(); break;
        case 4: updateItem(); break;
        case 5: deleteItem(); break;
        case 6: cout << "Exiting...\n"; break;
        default: cout << "Invalid choice!\n";
        }
    } while (choice != 6);

    return 0;
}
