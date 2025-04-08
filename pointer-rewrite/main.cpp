//
// Heidi Kinikini
// 4/8/2025
// Pointer Rewrite Programming Project
// COSC 1030
//

#include <iostream>
using namespace std;

//function prototype
int doSomething(int &, int &);

int main()
{
    int x = 10, y = 2;

    cout << "Before calling the function:\n"
    << "x = " << endl
    << "y = " << endl << endl;

    cout << "The function returns "
    << doSomething(x, y) << endl << endl;

    cout << "After calling the function:\n"
    << "x = " << x << endl 
    << "y = " << y << endl << endl;

    return 0;

}

//function doSomething

int doSomething(int &x, int &y)
{
    int temp = x;
    x = y * 10;
    y = temp * 10;
    return x + y;
}
