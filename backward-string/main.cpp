//
// Heidi Kinikini
// 4/20/2025
// Backward String Programming Project
// COSC 1030
//

#include <iostream>
#include <cstring>
using namespace std;

//Function prototype
void backward(char *);

int main()
{
    //Define array that will hold the input
    const int SIZE = 80;
    char input[SIZE];

    //Get string from user.
    cout << "Please enter a string that I will display backwards:\n";
    cin.getline(input, SIZE);

    // Display backwards using function
    backward(input);
    return 0;
}

//The backwards function will accept a pointer to string and display the string backwards

void backward (char *str)
{
    //Get subscript of last character in the string
    int last = strlen(str) - 1;

    //Work backwards through the string, displaying each character
    for (int index = last; index >= 0; index--)
    {
        cout << str[index];
    }

    cout << endl;
}
