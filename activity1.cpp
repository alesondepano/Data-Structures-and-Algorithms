#include <iostream>
#include <string>
using namespace std;

struct Grocery {
    string itemcode;
    string des;
    double price;
    int quan;
};

Grocery items[5];
int itemCount = 0;

void input_item() {
    for (int i = 0; i < 5; ++i) {
        Grocery item;
        cout << "Please enter the product " << i + 1 << ":\n";
        cout << "Item Code: ";
        cin >> item.itemcode;
        cin.ignore();
        cout << "Description: ";
        getline(cin, item.des);
        cout << "Price: ";
        cin >> item.price;
        cout << "Quantity: ";
        cin >> item.quan;
        items[itemCount++] = item;
    }
}

void display_all_item() {
    cout << "----------------------------------" << endl;
    cout << "Grocery Items" << endl;
    cout << "----------------------------------" << endl;
    for (int i = 0; i < itemCount; ++i) {
        cout << "Item Code: " << items[i].itemcode << endl;
        cout << "Description: " << items[i].des << endl;
        cout << "Price: " << items[i].price << endl;
        cout << "Quantity: " << items[i].quan << endl;
    }
}

void display_total_price() {
    double total = 0;
    for (int i = 0; i < itemCount; ++i) {
        total += items[i].price * items[i].quan;
    }
    cout << "Total Price of All Items: " << total << endl;
}

void display_lowest_price() {
    if (itemCount == 0) {
        cout << "No items available!!!" << endl;
        return;
    }

    Grocery* lowest = &items[0];
    for (int i = 1; i < itemCount; ++i) {
        if (items[i].price < lowest->price) {
            lowest = &items[i];
        }
    }

    cout << "Item with Lowest Price:" << endl;
    cout << "Item Code: " << lowest->itemcode << endl;
    cout << ", Description: " << lowest->des << endl;
    cout << ", Price: " << lowest->price << endl;
}

int main() {
    int choice;
    do {
        cout << "==============================================" << endl;
        cout << "\t\tGrocery Inventory System" << endl;
        cout << "==============================================" << endl;
        cout << "1. Input Grocery Item" << endl;
        cout << "2. Display All Items" << endl;
        cout << "3. Display Total Price of All Items" << endl;
        cout << "4. Display Item with Lowest Price" << endl;
        cout << "5. Exit" << endl;
        cout << "==============================================" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                input_item();
                break;
            case 2:
                display_all_item();
                break;
            case 3:
                display_total_price();
                break;
            case 4:
                display_lowest_price();
                break;
            case 5:
                cout << "Thank you for using the Grocery Inventory System!" << endl;
                break;
            default:
                cout << "Invalid choice. Please try again!!!!" << endl;
                break;
        }
    } while (choice != 5);

    return 0;
}
