// by thecodemonster

#include <iostream> 
using namespace std; 
 
 
int main() 
{
    int num, a, b, c, d, e, a2, b2, c2, d2, e2, f2, g2, h2, i2, j2;
    cout << "Enter five digit number: ";
    cin >> num;
//     num = 12345;
//     method 1 (getting number first to last)
    a = num / 10000;
    b = num / 1000 - (a * 10);
    c = num / 100 - (a * 100 + b * 10) ;
    d = num / 10 - (a * 1000 + b * 100 + c * 10);
    e = num / 1 - (a * 10000 + b * 1000 + c * 100 + d * 10);
    
    cout << "Method 1\n";
    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
    cout << d << endl;
    cout << e << endl << endl;
    
    if( (a < b) && (b < c) && (c < d) && (d < e))
    {
        cout << "increasing order!\n\n";
    }
    else if((e < d) && (d < c) && (c < b) && (b < a))
    {
        cout << "Decreasing order\n\n";
    }
    else
    {
        cout << "not a order\n\n";
    }
//     method 2 (getting number last to first)
    
    a2 = num % 10;
    b2 = num / 10;
    c2 = b2 % 10;
    d2 = b2 / 10;
    e2 = d2 % 10;
    f2 = d2 / 10;
    g2 = f2 % 10;
    h2 = f2 / 10;
    i2 = h2 % 10;
    j2 = h2 / 10;
    
    cout << "Method 2\n";
    cout << a2 << endl;
    cout << c2 << endl;
    cout << e2 << endl;
    cout << g2 << endl;
    cout << i2 << endl;
    return 0; 
} /* main */ 
