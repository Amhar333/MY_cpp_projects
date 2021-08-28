// by thecodemonster

#include <iostream> 
using namespace std; 
 
 
int main() 
{
    int num, a, b, c, d, e, a2, b2, c2, d2, e2;
    cout << "Enter five digit number: ";
    cin >> num;
//     num = 12345;
//     method 1 (getting number first to last)
    a = num / 10000;
    b = num / 1000 - (a * 10);
    c = num / 100 - (a * 100 + b * 10) ;
    d = num / 10 - (a * 1000 + b * 100 + c * 10);
    e = num / 1 - (a * 10000 + b * 1000 + c * 100 + d * 10);
    
    
    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
    cout << d << endl;
    cout << e << endl << endl;
    
    if( (a < b) && (b < c) && (c < d) && (d < e))
    {
        cout << "increasing order!\n";
    }
    else if((e < d) && (d < c) && (c < b) && (b < a))
    {
        cout << "Decreasing order\n";
    }
    else
    {
        cout << "not a order\n\n";
    }
//     method 2 (getting number last to first)
    
    a2 = num % 10 ;
    b2 = num % 100;
    c2 = num % 1000;
    d2 = num % 10000;
    e2 = num % 100000;
    
    
//     cout << a2 << endl;
//     cout << b2 << endl;
//     cout << c2 << endl;
//     cout << d2 << endl;
//     cout << e2 << endl;
    return 0; 
} /* main */ 
