//
// Heidi Kinikini
// 2/16/2025
// Time Calculator Programming Project
// COSC 1030
//
#include <iostream>
using namespace std; 

int main () 
{
    //Constant variables
    const double Seconds_Per_Minute = 60.0; //Seconds in a minute
    const double Seconds_Per_Hour = 3600.0; //Seconds in an hour
    const double Seconds_Per_Day = 86400.0; //Seconds in a day

    //Variable to hold number of seconds
    int seconds;

    //Grab number of seconds and store it in the seconds variable
    std::cout << "Enter a number of seconds: ";
    std::cin >> seconds;

    //Display the number of minutes in the number of seconds entered above.
    if (seconds >= Seconds_Per_Minute)
    {
        double minutes = seconds / Seconds_Per_Minute;
        std::cout << "There are " << minutes 
        <<" minutes in " << seconds
        << " seconds.\n";
    }

    //Display the number of hours in that number of seconds entered.
    if(seconds >= Seconds_Per_Hour) 
    {
        double hours = seconds / Seconds_Per_Hour;
        std::cout << "There are " << hours
        << " hours in " << seconds 
        << " seconds.\n";
    }

    //Display the number of days in that many seconds. 
    if(seconds >= Seconds_Per_Day)
    {
        double days = seconds / Seconds_Per_Day;
        std::cout << "There are " << days
        <<" days in " << seconds
        << " seconds.\n";
    }

    return 0;

}
