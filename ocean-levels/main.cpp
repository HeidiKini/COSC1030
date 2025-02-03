//
// Heidi Kinikini
// 02/02/2025
// Ocean Levels Programming Project
// COSC 1030
//
#include <iostream>
using namespace std;

int main ()
{
//Constant variable defining the rise rate every year
const double riseRate = 1.5;

//Calculate the rise rate based on numbers of years
double fiveYears = riseRate * 5;
double sevenYears = riseRate * 7;
double tenYears = riseRate * 10;

//Printing the result of the rise rate in 5, 7, and 10 years.
cout << "The oceans level in 5 years will be " << fiveYears << " millimeters higher." << endl;
cout << "The oceans level in 7 years will be " << sevenYears << " millimeters higher." << endl;
cout << "The oceans level in 10 years will be " << tenYears << " millimeters higher." << endl;

return 0;

}

