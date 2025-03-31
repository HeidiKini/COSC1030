//
// Heidi Kinikini
// 3/30/2025
// Temperatures
// COSC 1030
//

#include <iostream>
#include <iomanip>

using namespace std;

//Array type is typedef
typedef double tempArray[50];

//Calculating the temperature average
double calculateAverage(tempArray temps, int size)
{
    double sum = 0;

    for (int i = 0; i < size; i++)
    {
        sum += temps[i];
    }

    return sum / size;
}

//Function to get highest temperature
double highestTemp(tempArray temps, int size) 
{
    double highest = temps[0];

    for(int i = 1; i < size; i++)
    {
        if(temps[i] > highest)
        {
            highest = temps[i];
        }
    }
    return highest;
}

//Function to get lowest temperature
double lowestTemp(tempArray temps, int size)
{
    double lowest = temps[0];

    for(int i = 1; i < size; i++)
    {
        if(temps[i] < lowest)
        {
            lowest = temps[i];
        }
    }

    return lowest;

}


int main () 
{
    int numberOfTemps;

    //Get number of temperatures from user
    cout << "Please enter the number of temperatures: ";
    cin >> numberOfTemps;

    //Validate number to make sure it is between 1 and 50
    while (numberOfTemps < 1 || numberOfTemps > 50)
    {
        cout << "Please enter a number between 1 and 50." << endl;
        cout << "Please enter the number of temperatures: ";
        cin >> numberOfTemps;
    }



tempArray temps;

cout << "Please enter " << numberOfTemps << " temperatures:" << endl;
for (int i = 0; i < numberOfTemps; i++)
{
    cout << "Temperature " << i + 1 << ": ";
    cin >> temps[i];
}

//Calculate and display, average, highest and lowest temperatures.
double average = calculateAverage(temps, numberOfTemps);
double highest = highestTemp(temps, numberOfTemps);
double lowest = lowestTemp(temps, numberOfTemps);

//Output results
cout << fixed << setprecision(2); //set to 2 decimal places
cout << "Average Temperature: " << average << " degrees Celsius" << endl;
cout << "Highest Temperature: " << highest << " degrees Celsius" << endl;
cout << "Lowest Temperature: " << lowest << " degrees Celsius" << endl;

return 0;

}