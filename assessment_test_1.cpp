#include <iostream>
#include <string>

using namespace std;

int main() {
    int choice, quantity;
    char moreOrders;
    double totalAmount = 0;

    do {
        cout << "1. Pizza\t\tprice = 180rs/pcs" << endl;
        cout << "2. Burger\tprice = 100rs/pcs" << endl;
        cout << "3. Dosa\t\tprice = 120rs/pcs" << endl;
        cout << "4. Idli\t\tprice = 50rs/pcs" << endl;
        cout << "Please Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "You have selected Pizza." << endl;
                cout << "Enter the quantity: ";
                cin >> quantity;
                totalAmount += quantity * 180;
                break;
            case 2:
                cout << "You have selected Burger." << endl;
                cout << "Enter the quantity: ";
                cin >> quantity;
                totalAmount += quantity * 100;
                break;
            case 3:
                cout << "You have selected Dosa." << endl;
                cout << "Enter the quantity: ";
                cin >> quantity;
                totalAmount += quantity * 120;
                break;
            case 4:
                cout << "You have selected Idli." << endl;
                cout << "Enter the quantity: ";
                cin >> quantity;
                totalAmount += quantity * 50;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
                break;
        }

        cout << "Total Amount is = " << totalAmount << " rs" << endl;
        cout << "Do you want to place more orders? (y/n): ";
        cin >> moreOrders;

    } while (moreOrders == 'y' || moreOrders == 'Y');

    cout << "Final Total Amount = " << totalAmount << " rs" << endl;
    cout << "Thank you for your order!" << endl;

    return 0;
}

