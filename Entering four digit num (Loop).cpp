// by thecodemonster

#include <iostream>
#include <cmath>
using namespace std;

// main function
int main()
{
    int num;
    
    do
    {
        cout << "Enter a 4-digit number: ";
        cin >> num ;
//         for two digits
        if (num / 10 > 0 && num / 10 < 10)
        {
            cout << num << " has 2 digit. Please enter a 4-digits number\n\n";
        }
//         for three digits
        else if (num / 100 > 0  && num / 100 < 10)
        {
            cout << num << " has 3 digit. Please enter a 4-digits number\n\n";
        }
//         for four digits
        else if (num / 1000 > 0 && num / 1000 < 10)
        {
            cout <<  "You have entered a 4-digits number\n\n";
            break; // breaking the loop
        }
    } 
    while (num > 999 or num  < 10000);
    
    return 0;
} 
// main function
