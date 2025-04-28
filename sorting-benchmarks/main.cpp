//
// Heidi Kinikini
// 4/27/2025
// Sorting Benchmarks Programming Project
// COSC 1030
//

#include <iostream>
using namespace std;

const int SIZE = 20;

//function prototypes to bubble sort and selection sort the passed in array
int bubbleSort(int arr[], int size);
int selectionSort(int arr[], int size);
//void prototypes used to copy original array to pass through each function and printing array to the screen without returning a value
void copyArray(int source[], int destination[], int size[]);

//sort functions

//function for the bubble sort
int bubbleSort(int arr[], int size)
{
    //variable for number of exchanges
    int exchanges = 0;
    //check to see if swap occurred (if array is already sorted)
    bool isSwapped;

    for (int i = 0; i < size - 1; i++)
    {
        //set swap to false
        isSwapped = false;

        //sort array
        for (int j = 0; j < size - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                //count excahanges and when done set array swapped to true
                swap(arr[j], arr[j + 1]);
                exchanges++;
                isSwapped = true;
            }
        }

        if(!isSwapped) break; //Stop if there are no swaps in pass.
    }

    return exchanges;
}

//function for the selectionSort
int selectionSort(int arr[], int size)
{
    int exchanges = 0;

    for (int i = 0; i < size -1; i++)
    {
        int minimumIndex = i;

        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[minimumIndex])
            {
                minimumIndex = j;
            }
        }

        if(minimumIndex != i) 
        {
            swap(arr[i], arr[minimumIndex]);
            exchanges++;
        }
    }

    return exchanges;
}

//functions for copy and display

void copyArray(int source[], int destination[], int size)
{
    for (int i = 0; i < size; i++)
    {
        destination[i] = source[i];
    }
}


int main()
{
    //create original array to be passed through sort functions
    int originalArr[SIZE] = {12, 24, 75, 4, 36, 27, 85, 46, 25, 68, 34, 98, 35, 14, 19, 48, 13, 55, 66, 88};
    //variables for the sorted array versions
    int bubbleArr[SIZE];
    int selectionArr[SIZE];

    //copy the original array to pass into each sorting function using the copyArray function
    copyArray(originalArr, bubbleArr, SIZE);
    copyArray(originalArr, selectionArr, SIZE);

    //sort array using bubbleSort and count the exchanges
    int exchangesForBubble = bubbleSort(bubbleArr, SIZE);
    cout << "Bubble Sort: " << exchangesForBubble << " exchanges made." << endl;

    //sort array using selectionSort and count the exchanges
    int exchangesForSelect = selectionSort(selectionArr, SIZE);
    cout << "Selection Sort: " << exchangesForSelect << " exchanges made.";

    return 0;
}


