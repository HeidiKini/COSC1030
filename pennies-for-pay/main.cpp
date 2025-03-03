//
// Heidi Kinikini
// 3/2/2025
// Pennies for Pay Programming Project
// COSC 1030
//
#include <iostream> 
#include <iomanip>
using namespace std; 

int main ()
{
    //Variable to hold the days 
    int days;

    //do while loop for input validation to get number of days equal to or greater than one. If number is not equal to or greater than one. Program will keep asking.
    do 
    {
        std::cout << "Enter the number of days worked (needs to be at least one): ";
        std::cin >> days;
    } while (days < 1);

    double totalPay;
    double dailySalary = 0.01;
    int dayCounter = 1;
    std::cout << dayCounter << "\t\t" << dailySalary << std::endl;
    dayCounter++;

    for (; dayCounter <= days; dayCounter++)
    {
        dailySalary *= 2;
        std::cout << dayCounter << "\t\t" << dailySalary << std::endl;
    }

    std::cout << "Total Pay: " << dailySalary << std::endl;
}