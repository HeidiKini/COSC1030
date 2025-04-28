//
// Heidi Kinikini
// 4/27/2025
// String Length Programming Project
// COSC 1030
//

#include <iostream>
using namespace std;

//function that counts the characters in a C-string
int countTheCharacters(const char* str)
{
    int count = 0;
    while (str[count] != '\0')
    {
        count ++;
    }
    
    return count;
}

int main ()
{
    const int SIZE = 100;
    char userInput[SIZE];

        cout << "Please enter a string: ";
        cin.getline(userInput, SIZE);

        int length = countTheCharacters(userInput);

        cout << "The number of the characters in the string is: " << length << endl;

        return 0;
}