//
// Heidi Kinikini
// 2/16/2025
// University of Guiness Programming Project
// COSC 1030
//

#include <iostream>
using namespace std;

int main()
{

//Variable that holds string for residential status user input
char residentialStatus;

//Char variable that holds user input Y / N for Room and Board option
char roomAndBoard;

//Int variables to hold tuition fees for in or out of state costs
int tuition = 0;
int roomBoard = 0;

//Gather and validate residential status
std::cout << "Please enter whether your residential status is 'in-state' or 'out-of-state:\n";
std::cout << "(1) In-State\n";
std::cout << "(2) Out-of-State\n";

residentialStatus = std::cin.get();
std::cin.ignore();

//Define tuition costs based on residential status
if (residentialStatus == '1')
{

tuition = 3000;
roomBoard = 2500;

} else if (residentialStatus == '2') {

tuition = 4500;
roomBoard = 3500;

}

//Gather input on whether user requires room and board
std::cout << "Do you require a room and board? (Y or N): ";
roomAndBoard = std::cin.get();
std::cin.ignore();

//Calculate total based on defined above entries 
int totalBill = tuition;

if (roomAndBoard == 'Y' || roomAndBoard == 'y') {
    totalBill += roomBoard;
}

//Output the total bill
std::cout << "Your total bill for the semester is: $" << totalBill << endl;

return 0;

}
