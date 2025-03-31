//
// Heidi Kinikini
// 3/30/2025
// Chips and Salsa Programming Project
// COSC 1030
//

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

//Function prototypes
void getSales(string[], int[], int);
int getToatal(int[], int);
int largestElement(int[], int);
int smallestElement(int[], int);

int main ()

{
   //Constant variable for the number of salsa types
   const int SALSA_TYPES = 5;
   
   //Array of salsa types
   string names[SALSA_TYPES] = {"mild", "medium", "sweet", "hot", "zesty"};

   //Array of sales of each salsa type
   int sales[SALSA_TYPES];

   //Total number of jars sold
   int totalJarsSold;

   //Sales that sold the most
   int highestSalesProduct;

   //Salsa that sold the lowest
   int lowestSalesProduct;

   //Get numnber of jars sold for each type
   getSales(names, sales, SALSA_TYPES);
   highestSalesProduct = largestElement(sales, SALSA_TYPES);
   lowestSalesProduct = smallestElement(sales, SALSA_TYPES);

   //Display sales report header
   cout << endl << endl;
   cout << "    Salsa Sales Report \n\n";
   cout << " Name              Jars Sold \n";
   cout << "____________________________\n";

   //Display the name and jars sold of each type of salsa
   for (int salsaType = 0; salsaType < SALSA_TYPES; salsaType++)
   {
     cout << setw(6) << names[salsaType]
     << setw(21) << sales[salsaType]
     << endl;
   }

   //Display the total sales, and highest/lowest seller.
   cout << "\nTotal Sales:" << setw(15) << totalJarsSold << endl;
   cout << "High Seller: " << names[highestSalesProduct] << endl;
   cout << "Low Seller: " << names[lowestSalesProduct] << endl;

   return 0;
}

//Function getSales gets the number of jars for each salsa type that was sold from the user. The names array parameter holds the names of these salsa, and the sales array parameter will hold the numbers sold of each corresponding type.
void getSales(string names[], int sales[], int size)
{
    for (int type = 0; type < size; type++)
    {
        //Get number of jars sold
        cout << "How many jars of " << names[type]
        << " salsa did we sell? ";
        cin >> sales[type];

        //validate input
        while (sales[type] < 0)
        {
            cout << "Jars sold must be 0 or more. Please re-enter: ";
            cin >> sales[type];
        }
     
    }
}

//The function getTotal calculates and returns the total of the values stored in the array passed into the funtion
int getTotal(int array[], int size)
{
    int total = 0;

    for (int pos = 0; pos < size; pos++)
    total+= array[pos];

    return total;
}

//Finds and returns the array position holding the largest value in the array passed into function.
int largestElement(int array[], int size)
{
    int indexOfLargest = 0;

    for (int pos = 1; pos < size; pos++)
    {
        if(array[pos] > array[indexOfLargest])
        indexOfLargest = pos;
    }
    return indexOfLargest;
}

//Finds and returns the array position of the smallest value in the array passed into the function.
int smallestElement(int array[], int size)
{
    int indexOfSmallest = 0;

    for (int pos = 1; pos < size; pos++)
    {
        if (array[pos] < array[indexOfSmallest])
        indexOfSmallest = pos;

    }
    
    return indexOfSmallest;
}