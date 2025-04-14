//
// Heidi Kinikini
// 4/13/2025
// Monthly Sales Programming Project
// COSC 1030
//

#include <iostream> 
using namespace std;

//Function that calculates the total
double calculateTotal(double* sales, int size)
{
    double sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += sales[i];
    }

    return sum;
}

//Function that calculates the average
double averageCalculator(double* sales, int size)
{
    double sum = calculateTotal(sales, size);
    
    if (size > 0)
    {
        return sum / size;

    } else 

    {
        return 0;
    }

}

int main ()
{
    int numberOfMonths;
    //get the number of months from the user
    cout << "Please enter the number of months: ";
    cin >> numberOfMonths;

    //Allocate new memory to sales equal to number of months
    double* sales = new double[numberOfMonths];

    //Go through number of months with a for loop to get each sell for however many number of months.
    for (int i = 0; i < numberOfMonths; i++)
    {
        cout << "Enter the sales for the month " << i + 1 << ": ";
        cin >> sales[i];
    }
    // call the functions with the user input as parameters to calculate total and average
    double yearlyTotal = calculateTotal(sales, numberOfMonths);
    double average = averageCalculator(sales, numberOfMonths);

    //Display the output
    cout << "Total yearly sales: " << yearlyTotal << endl;
    cout << "Average monthly sales: " << average << endl;

    return 0;
}