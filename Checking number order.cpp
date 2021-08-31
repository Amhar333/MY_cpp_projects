// by thecodemonster

#include <iostream>
#include <cmath>
using namespace std;

// main function
int main()
{
    cout << "Enter a 4-digit number: ";
    int num;
    cin >> num;
    int a = num % 10 / 1;
    int b = num % 100 / 10;
    int c = num % 1000 / 100;
    int d = num % 10000 / 1000;
    
    if (d < c && c < b && b < a)
    {
        cout << "Increasing order";
    }
    else if (a < b && b < c && c < d)
    {
        cout << "Decreasing order";
    }
    else
    {
        cout << "Not in order";
    }
    return 0;
} 
// main function


