//
// Heidi Kinikini
// 4/6/2025
// Integer Array
// COSC 1030
//

#include <iostream>
#include <iomanip>
using namespace std;


void bubbleSortArray(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (array[i] > array[j]) 
            {
                int swap = array[j];
                array[j] = array[i];
                array[i] = swap;
            }
        }
    }
}

int binarySearch(const int array[], int size, int value)
{
    int first = 0, last = size - 1;

    while (first <= last) 
    {
        int middle = (first + last) / 2;

        if (array[middle] == value)
        {

            return middle; 

        } else if (array[middle] > value)

        {

           last = middle - 1;

        } else 
        {

            first = middle + 1; 

        }

    }

    return -1;
}

double meanArrayValue(int array[], int size)
{
    double sum = 0;
    for (int i = 0; i < size; i++)
    {

        sum += array[i];

    }

    double mean = sum / size;

    return mean;
}

int main ()
{
    //Initialize variables for the size of the array and the target value being searched for.
    int size;
    int target;

    //Prompt the user to enter a size for the array.
    cout << "Please enter the number of elements in the array (no more than 50):";
    cin >> size;

    //Create variable numbers to store a numbers array with it's size, all given by the user.
    int numbers[size];

    //Validate the size of the array
    if (size < 1 || size > 50)
    {
        cout << "Invalid number of elements. Please choose a number between 1 and 50" << endl;
        
        return 1;

    }

    //Prompt the user to enter a number for each index
    for (int i = 0; i < size; i++)
    {
        cout << "Please enter number a position " << (i + 1) << ": ";
        cin >> numbers[i];
    }

    //Make a copy of the original array as entered by the user
    int numbersCopy[size];

    for (int i = 0; i < size; i++)
    {
        numbersCopy[i] = numbers[i];
    }

    //Call the bubbleSortArray function to sort the numbers array.
    bubbleSortArray(numbers, size);

    //Get a target value to search for from the user
    cout << "Please enter a number to search for in your array: ";
    cin >> target;

    //Give variables to store the results of binarySearch and meanArrayValue functions
    int targetValueIndex = binarySearch(numbers, size, target);
    double meanValue = meanArrayValue(numbers, size);
    
    //output the size of the array
    cout << "The size of the array: " << size << endl;

    //output the array as entered by the user
    cout << "The array as entered:" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << numbersCopy[i] << " ";
    }

    cout << endl;

    cout << "The sorted array:" << endl;

    //Determine if the target value was found and output the index if found.
    for (int i = 0; i < size; i++)
    {
        cout << numbers[i] << " ";
    }

    cout << endl;

    cout << "The number being searched for: " << target << endl;

    if (targetValueIndex != -1)

    {

        cout << "The index of the value being searched for: " << targetValueIndex << endl;

    } else 

    {

        cout << "The value being searched for was not found.";

    }

    cout << fixed << setprecision(2);
    cout << "The mean of the array: " << meanValue << endl;
}
