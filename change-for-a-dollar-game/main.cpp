//
// Heidi Kinikini
// 3/2/2025
// Change for a Dollar Game Programming Project
// COSC 1030
//
#include <iostream> 
using namespace std;

int main () 
{

//Variables to hold number of each coin from user input
int pennies, nickels, dimes, quarters;

//Get number of coins from user
std::cout << "Enter the number of pennies: ";
std::cin >> pennies;

std::cout << "Enter the number of nickels: ";
std::cin >> nickels; 

std::cout << "Enter the number of dimes: ";
std::cin >> dimes;

std::cout << "Enter the number of quarters: ";
std::cin >> quarters; 

//Calculate the total value in dollars from cents

int totalValue = pennies + (nickels * 5) + (dimes * 10) + (quarters * 25);

//Check if total value of coins equals 100 (or one dollar)
if (totalValue == 100)
{
    cout << "Congratulations! The total is exactly one dollar." << endl;
} else if (totalValue > 100) 
{
    cout << "The total value is more than one dollar." << endl;
} else 
{
    cout << "The total value is less than one dollar." << endl;
}

return 0; 

}