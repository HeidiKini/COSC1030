//
// Heidi Kinikini
// 2/9/2025
// Stadium Seating Programming Project
// COSC 1030
//

#include <iostream>
#include <iomanip>

int main ()
{
    //Ticket price constants and variable to hold total revenue from ticket sales
    const double Class_A_Price = 15.0;
    const double Class_B_Price = 12.0;
    const double Class_C_Price = 9.0;
    double total;         

    //Variables to hold number of tickets sold for each class
    int classATickets; 
    int classBTickets; 
    int classCTickets;

    //Enter and read the number of Class A tickets sold and store it in Class A variable
    std::cout << "Enter the number of Class A tickets sold: ";
    std::cin >> classATickets;

    //Enter and read the number of Class B tickets sold and store it in Class B variable
    std::cout << "Enter the number of Class B tickets sold: ";
    std::cin >> classBTickets; 

    //Enter and read the number of Class C tickets sold and store it in Class C variable
    std::cout << "Enter the number of Class C tickets sold: ";
    std::cin >> classCTickets;

    //Calculate the total from ticket sales.
    total = (classATickets * Class_A_Price) +
            (classBTickets * Class_B_Price) +
            (classCTickets * Class_C_Price);

    //Display the total
    std::cout << "The total revenue from ticket sales is $ "
    << std::setprecision(2) << std::fixed << total << std::endl;

    return 0;
}