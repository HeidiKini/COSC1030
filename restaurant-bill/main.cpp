//
// Heidi Kinikini
// 02/02/2025
// Restaurant Bill Programming Project
// COSC 1030
//
#include <iostream>
using namespace std;
int main ()
 {
    //Variable declarations and calculations
    double meal = 88.67;
    double tax = meal * 0.0675;  //tax calculation
    double subtotal = meal + tax; //tax plus total calculation
    double tip = subtotal * 0.20; //subtotal plus tip calculation
    double total = subtotal + tip; //total calculation

    //Print information about the sale
    cout << "Meal cost: " << meal << endl;
    cout << "Tax: " << tax << endl;
    cout << "Tip: " << tip << endl;
    cout << "Total: "<< total << endl;
        
    return 0;
 }
