// you can see what is your weight of the score from this programme

#include <iostream>
using namespace std;

//Compiler version g++ 6.3.0

int main()
{
    int num;
    cout << "what is your score > ";
    cin >> num;
    cout << "weight of the scores is : \n";
    if ((num >= 87) && (num <= 100))
    {
        cout << "4";
    }
    if ((num >= 74) && (num <= 86)){
        cout << "3";
    }
    if ((num >= 60) && (num <= 73))
    {
        cout << "2";
    }
    if ((num >= 50) && (num <= 59))
    {
        cout << "1";
    }
    if ((num <= 49) && (num >= 0) || (num > 100)){
        cout << "0";
    }
    if (num < 0){
        cout << "INVALID SCORE! \nEnter valid scores (0-100)";
    }
    
    return 0;
}
