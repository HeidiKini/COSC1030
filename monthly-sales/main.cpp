//
// Heidi Kinikini
// 4/13/2025
// Monthly Sales Programming Project
// COSC 1030
//

#include <iostream> 
using namespace std;

double calculateTotal(double* sales, int size)
{
    double sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += sales[i];
    }

    return sum;
}

double averageCalculator(double* sales, int size)
{
    double sum = calculateTotal(sales, size);
    
    return size > 0 ? sum / size : 0;

}

int main ()
{
    int numberOfMonths;

    cout << "Please enter the number of months: ";
    cin >> numberOfMonths;

    double* sales = new double[numberOfMonths];

    for (int i = 0; i < numberOfMonths; i++)
    {
        cout << "Enter the sales for the month " << i + 1 << ": ";
        cin >> sales[i];
    }

    double yearlyTotal = calculateTotal(sales, numberOfMonths);
    double average = averageCalculator(sales, numberOfMonths);

    cout << "Total yearly sales: " << yearlyTotal << endl;
    cout << "Average monthly sales: " << average << endl;

    return 0;
}