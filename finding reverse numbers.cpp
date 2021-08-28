// by thecodemonster

#include <iostream>
using namespace std;

// main function
int main()
{
    int number, digit, reverse = 0;
    cout << "Enter a number: ";
    cin >> number;
    while (number > 0)
    {
        digit = number % 10;
        reverse = reverse * 10 + digit;
        number = number / 10;
    }
    cout << "The reverse of the number is enterd is: " << reverse <<endl;
    return 0;
} 
// main function
