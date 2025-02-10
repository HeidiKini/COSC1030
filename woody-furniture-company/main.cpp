//
// Heidi Kinikini
// 2/9/2025
// Woody Furniture Company Programming Project
// COSC 1030
//
#include <iostream>
#include <iomanip>

int main ()
{

//Constant variables for prices and variable holding the total price.
const double American_Colonial = 85.00;
const double Modern = 57.50;
const double French_Classical = 127.75;
double total; 

//Variables holding the amount of chairs bought for each furniture type
int americanChairs;
int modernChairs;
int frenchChairs;

//Enter and read the number of chairs sold for American Colonial and store it in the americanChairs variable
    std::cout << "Enter the number of American Colonial chairs sold: ";
    std::cin >> americanChairs;

//Enter and read the number of chairs sold for Modern and store it in the modernChairs variable
    std::cout << "Enter the number of Modern chairs sold: ";
    std::cin >> modernChairs;

//Enter and read the number of chairs sold for French Classical and store it in the frenchChairs variable
    std::cout << "Enter the number of French Classical chairs sold: ";
    std::cin >> frenchChairs;

//Calculate the total of chairs sold and store it in total variable
    total = (American_Colonial * americanChairs) +
            (Modern * modernChairs) +
            (French_Classical * frenchChairs);

//Display the total 
    std::cout << "The total revenue from the chairs sales is $ "
    << std::setprecision(2) << std::fixed << total << std::endl;

    return 0;
}