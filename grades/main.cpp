//
// Heidi Kinikini
// 3/16/2025
// Grades Programming Project
// COSC 1030
//

#include <iostream>
#include <iomanip>

void calculateGrade(double &);

int main() 
{
    std::cout << std::fixed << std::setprecision(2);

    double gradeAvg = 0.0;

    calculateGrade(gradeAvg);

    char letterGrade;

    if (gradeAvg >= 90) {
        letterGrade = 'A';
    } else if (gradeAvg >= 80) {
        letterGrade = 'B';
    } else if (gradeAvg >= 70) {
        letterGrade = 'C';
    } else if (gradeAvg >= 60) {
        letterGrade = 'D';
    } else {
        letterGrade = 'F';
    }

    std::cout << "Your grade average is: " << letterGrade << "\n";
}

void calculateGrade(double &average)
{
    double current;
    int count = 0;

    while (current != -5)
    {
        std::cout << "Please enter the current grade, and enter -5 when finished." << std::endl;
        std::cin >> current;

        if (current != -5) {
            average += current;
            count++;
        }
    }

    average = average / count;
}