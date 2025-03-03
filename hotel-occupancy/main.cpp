//
// Heidi Kinikini
// 3/2/2025
// Hotel Occupancy Programming Project
// COSC 1030
//
#include <iostream>
#include <iomanip>
using namespace std;

int main ()
{
    int numOfFloors, totalRooms = 0, totalRoomsOccupied = 0;

    double roomsOccupiedPercentage;

    do
    {
     std::cout << "Please the number of floors in the hotel (input must equal to or greater than 1): ";
     std::cin >> numOfFloors;

    } while (numOfFloors < 1);
   

    for(int i = 0; i < numOfFloors; i++)
    {
        if ((i + 1) == 13) {
            continue;
        }

        int roomCount = 0;
        int occupied = 0;

        while (roomCount < 10){
            std::cout << "How many rooms on floor " << (i + 1) << " (must be greater than or equal to 10)? " << std::endl;
            std::cin >> roomCount;
        }
        
        std::cout << "How many rooms are occupied? " << std::endl;
        std::cin >> occupied;

        totalRooms += roomCount;
        totalRoomsOccupied += occupied;
    }

    roomsOccupiedPercentage = ((double) totalRoomsOccupied / totalRooms) * 100;

    // Display data
    std::cout << "The hotel has a total of " << totalRooms << " rooms." << std::endl;
    std::cout << "The hotel has " << totalRoomsOccupied << " occupied rooms." << std::endl;
    std::cout << "The hotel has " << (totalRooms - totalRoomsOccupied) << " unoccupied rooms." << std::endl;
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "The total percentage of rooms occupied in the hotel is %"<< roomsOccupiedPercentage << std::endl;
}