//
// Heidi Kinikini
// 3/16/2025
// Markup Programming Project
// COSC 1030
//

#include <iostream>
#include <iomanip>
using namespace std;

//prototype
double calculateRetail (double, double);

int main ()
{
    double wholesale; //wholesale cost
    double markupPercent; //markup percentage
    double retail; //retail price

    //get item's wholesale cost
    cout << "Please enter the item's wholesale cost: ";
    cin >> wholesale;

    //validate wholesale cost
    while(wholesale < 0)
    {
        cout << "Please enter a non-negative value: ";
        cin >> wholesale;
    }

    //get item's markup percentage
    cout << "Enter the item's markup percentage: ";
    cin >> markupPercent;

    //validate markup percentage 
    while(markupPercent < 0) 
    {
      cout << "Please enter a non-negative value: ";
      cin >> markupPercent;
    }

    //get item's retail price
    retail = calculateRetail (wholesale, markupPercent);

    //display the retail price
    cout << "The retail price is $" << setprecision(2) << fixed << retail << endl;

    return 0;

}

//calculateRetail function accepts an item's wholesale cost and markup percentage and rturns the retail price

double calculateRetail (double wholesale, double markupPercentage)
{
    double markup = wholesale * markupPercentage / 100;
    return wholesale + markup;
}

