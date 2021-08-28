// by thecodemonster
// PSEUDOCODE TESTING

#include <iostream>
using namespace std;

// main function
int main()
{
    int a, b, c, d, e, num;
    cout << "Enter a number: ";
    cin >> num;
    while (num > 0)
    {
        a = num % 10;
        num = num / 10;
        cout << a << endl ;
    }
    return 0;
} 
// main function
