#include <iostream>
#include <iomanip> 

using namespace std;

int main() {
  
    double item1 = 0.0, item2 = 0.0, item3 = 0.0;
    double subtotal = 0.0;
    double discount = 0.0;
    double tax = 0.0;
    double finalTotal = 0.0;
    double payment = 0.0;
    double change = 0.0;

    cout << fixed << setprecision(2);

    cout << "=================================" << endl;
    cout << "    EX Supermarket Cashier       " << endl;
    cout << "=================================" << endl;
    
    cout << "Enter price of Item 1: ";
    cin >> item1;
    cout << "Enter price of Item 2: ";
    cin >> item2;
    cout << "Enter price of Item 3: ";
    cin >> item3;

    subtotal = item1 + item2 + item3;

    if (subtotal > 500) {
        discount = subtotal * 0.10;
    }

    double amountAfterDiscount = subtotal - discount;
    tax = amountAfterDiscount * 0.14;

    finalTotal = amountAfterDiscount + tax;

    cout << "  RECEIPT \n " << endl;
    cout << "---------------------------------" << endl;
    cout << "Subtotal: " << subtotal << " EGP" << endl;
    
    if (discount > 0) {
        cout << "Discount Applied (10%): -" << discount << " EGP" << endl;
        cout << "Subtotal after Discount: " << amountAfterDiscount << " EGP" << endl;
    }
    
    cout << "Taxes (14% VAT):  +" << tax << " EGP" << endl;
    cout << "---------------------------------" << endl;
    cout << "FINAL TOTAL: " << finalTotal << " EGP" << endl;
    cout << "---------------------------------\n" << endl;

    cout << "Enter Customer Payment: ";
    cin >> payment;

    if (payment >= finalTotal) {
        change = payment - finalTotal;
        cout << "[SUCCESS] Payment Successfull \n" << endl;
        cout << "Change to Return: " << change << " EGP" << endl;
        cout << "Thank you for shopping with us" << endl;
    } else {
        double missingAmount = finalTotal - payment;
        cout << "[ERROR] Transaction Failed \n " << endl;
        cout << "Insufficient payment. You still need: " << missingAmount << " EGP" << endl;
    }

    return 0;
}
