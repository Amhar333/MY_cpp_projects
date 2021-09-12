// by thecodemonster
// PSEUDOCODE TESTING

#include <iostream>
using namespace std;

// main function
int main()
{
//     first method
    int a, b, c, d, e, num;
    cout << "Enter a number: ";
    cin >> num;
    while (num > 0)
    {
        a = num % 10;
        num = num / 10;
        cout << a << endl ;
    }
    
    
//     second method
    int digit;
    int x = 10;
    int y = 1;
    int i = 1;
//  if the number is four digit then excution this part
    if (num > 999 && num < 10000)
    {
        while (i <= 4) // 4 is representing to four digit
        {
            digit = num % x / y;
            cout << digit << endl;
            x = x * 10;
            y = y * 10;
            i++;
        }
    }
    cout << endl ;
    
//     third method - using forloop
    for (int a = 0; a < 4; a++)
    {
        digit = num % x / y;
        cout << digit << endl;
        x *= 10;
        y *= 10;
    }
    return 0;
} 
// main function
