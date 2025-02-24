//
// Heidi Kinikini
// 2/23/2025
// Beverages Survey Programming Project
// COSC 1030
//
#include <iostream>
using namespace std;

int main()
{
//variables to keep track of the amount of beverages entered
int coffeeCount = 0;
int teaCount = 0; 
int cokeCount = 0; 
int orangeJuiceCount = 0; 

//variable to hold user choice
char choice;

while(choice != '?')
{
    //get choice from users
    std::cout << "Survey on tall beverages. Please select your beverage of choice by entering the corresponding number:\n";
    std::cout << "(1) Coffee\n";
    std::cout << "(2) Tea\n";
    std::cout << "(3) Coke\n";
    std::cout << "(4) Orange Juice\n";
    std::cout << "(?) End Survey\n";

    std::cin >> choice;

    switch (choice) {
        case '1':
            coffeeCount++;
            break;
        case '2':
            teaCount++;
            break;
        case '3':
            cokeCount++;
            break;
        case '4':
            orangeJuiceCount++;
            break;
    }
}

std::cout << "Survey Results:" << endl;
std::cout << "Coffee: " << coffeeCount << endl;
std::cout << "Tea: " << teaCount << endl;
std::cout << "Coke: " << cokeCount << endl;
std::cout << "Orange Juice: " << orangeJuiceCount << endl;

return 0;

}