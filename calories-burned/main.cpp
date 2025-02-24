//
// Heidi Kinikini
// 2/23/2025
// Calories Burned Programming Project
// COSC 1030
//
#include <iostream>
using namespace std;

int main ()
{
    //Constant for calories per minute
    const double CAL_PER_MINUTE = 3.6;

    int minutes;  //variable for number of minutes
    double calories; //variable for calories burned

    //loop that adds calories for every five minutes, starting at 5, up until 30 minutes 
    for (minutes = 5; minutes <= 30; minutes += 5){

        calories = minutes * CAL_PER_MINUTE;

        std::cout << "After " << minutes << " minutes, you burned "
         << calories << " calories.\n";
    }

    return 0;
}