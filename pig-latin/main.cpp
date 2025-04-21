//
// Heidi Kinikini
// 4/20/2025
// Pig Latin Programming Project
// COSC 1030
//

#include <iostream>
#include <string>
#include <cctype>

using namespace std;

//Function to convert string to pig latin
string toPigLatin(string sentence)

{
    const int SIZE = 25;
    string word = "";
    string strArr[SIZE];
    int strArrIndex = 0;

   for(int i = 0; i < sentence.length(); i++){
      char character = sentence[i];
      if(isspace(character))
      {
        if (word != "") {
            //If already full word (before space) it pushes word into the string array.
            strArr[strArrIndex] = word;
            strArrIndex++;
            //Clear the word variable
            word = "";
        }
        //Continue if space
        continue;
      }

      word += character;
   }

    strArr[strArrIndex] = word;
    strArrIndex++;
    word = "";

    string pigLatinString = "";

    for(int i = 0; i < SIZE; i++)
    {
        string currWord = strArr[i];
        if(currWord == "")
        {
            continue;
        }

        char firstChar = currWord[0];
        //Append first letter to end of word
        currWord += firstChar;
        currWord += "ay";
        //Remove first letter
        currWord.erase(0, 1);

        pigLatinString += currWord + " ";

        
    }

   return pigLatinString;
   
}

int main()
{
    string input;

    cout << "Please enter a sentence or a word to convert to Pig Latin: ";
    getline(cin, input); //Get entire line of input

    cout << input << endl;

    string pigLatinString = toPigLatin(input);

    cout << pigLatinString << endl;
}
