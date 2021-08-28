// thecodemonster's coding
// Finding the squre root untill our input :)
// pseudo code testing

#include <iostream> 
using namespace std; 
 
 
int main() 
{ 
    int eNum, num = 1, i = 1;
    cout << "Enter a number : ";
    cin >> eNum;
    while (num <= eNum)
    {
        cout << num<< "  " ;
        i++ ;
        num = i * i;
    }
    return 0; 
} /* main */ 
