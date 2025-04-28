//
// Heidi Kinikini
// 4/27/2025
// Dental Bill Programming Project
// COSC 1030
//

#include <iostream>
using namespace std;

double calculateBill(double serviceCharge, double testFees)
{
    return serviceCharge + testFees;
}

double calculateBill(double serviceCharge, double testFees, double medicineFees)
{
    return serviceCharge + testFees + medicineFees;
}

int main()
{
    char member;
    double serviceCharge, testFees, medicineFees, total;

    cout << "Is the patient a member of the dental plan? (Y/N): ";
    cin >> member;

    cout << "Please enter the service charge: ";
    cin >> serviceCharge;

    cout << "Please enter the test fees: ";
    cin >> testFees;

    if (member == 'y' || member == 'Y')
    {
        total = calculateBill(testFees, serviceCharge);

    } else 
    {
        cout << "Please enter medicine fees: ";
        cin >> medicineFees;
        
        total = calculateBill(testFees, serviceCharge, medicineFees);
    }

    cout << "The total bill is $" << total << endl;

    return 0;
}