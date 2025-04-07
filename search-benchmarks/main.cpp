//
// Heidi Kinikini
// 4/6/2025
// Search Benchmarks Programming Project
// COSC 1030
//

#include <iostream>

using namespace std;

//search functions

//First linear search function
int searchLinear(const int array[], int size, int value, int &comparisons) 
{
    for(int i = 0; i < size; i++)
    {
        if (array[i] == value)
        {
            return i;
        }

        comparisons++;
    }

    return -1;
}

//binary search (for sorted array)
int binarySearch(const int array[], int size, int value, int &comparisons)
{
    //initialize variables to store first and last values of array
    int first = 0, last = size - 1;

    //while loop to split array while first is less than (or while there is still something left to search)
    while (first <= last)
    {
        //find the middle index. WHich is halfway between first and last.
        int middle = (first + last) / 2;

        //If it's a match, return the index of the value. 
        // If middle value is too big, search the left half by moving last variable to the left. 
        // If its too small, search the right half by moving the first variable to the right.
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

        //count the comparison
        comparisons++;
    }

    return -1;
}

// sort functions
void bubbleSortArray (int array[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if(array[i] > array[j])
            {
                //swap if in wrong order
                int swap = array[j];
                array[j] = array[i];
                array[i] = swap;
            }
        }
    }
}

//main function that takes in a target to look for in the array of numbers.

int main() 
{
    int size = 20;

    //initialize array of numbers with the array size.
    int numbers[] = {24, 15, 17, 56, 22, 1, 46, 32, 53, 67, 77, 98, 31, 89, 36, 55, 43, 64, 99, 100};

    //initialize a variable to store the target number to look for in array.
    int target; 

    //Enter a number to look for in the array
    cout << "Please enter a number to search for: ";
    cin >> target;

    //use the linear search function that counts comparisons made and returns index of target number if found. Arguments are the numbers array, the comparisons and the target number as well as the array size.
    int linearSearchComparisons = 0;
    int linearSearchIndex = searchLinear(numbers, size, target, linearSearchComparisons);

    //sorts the array to use in the binarySearch function.
    //copy the array and sort it then store in sortedNumbers variable.
    int numbersCopy[size];

    for (int i = 0; i < size; i++)
    {
        numbersCopy[i] = numbers[i];
    }

    bubbleSortArray(numbers, size);

    cout << "Unsorted array: ";

    for (int i = 0; i < size; i++)
    {
        cout << numbersCopy[i] << " ";
    }

    cout << endl;

    cout << "Sorted array: ";

    for (int i = 0; i < size; i++)
    {
        cout << numbers[i] << " ";
    }

    cout << endl;

    //use the binarySearch function on the sorted array with the arguments of the sorted array, the size of the array, the target number, and the binarySearchComparisons.
    int binarySearchComparisons = 0;
    int binarySearchIndex = binarySearch(numbers, size, target, binarySearchComparisons);

    //output results for the linear search
    if(linearSearchIndex != -1) 
    {
        cout << "Linear search found the target number at index " << linearSearchIndex << " with " << linearSearchComparisons << " number of comparisons.\n";
    } else
    {
        cout << "Linear search did not find the target number with " << linearSearchComparisons << " number of comparisons.\n";
    }

    //output results for the binary search
    if (binarySearchIndex != -1) 
    {
        cout << "The binary search found the target number at index " << binarySearchIndex << " with " << binarySearchComparisons << " number of comparisons.\n";
    } else 
    {
        cout << "The binary search did not find the target number with " << binarySearchComparisons << " number of comparisons.\n";
    }

    return 0;
}