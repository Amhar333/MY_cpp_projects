// by thecodemonster

#include <iostream>
#include <cmath>
using namespace std;

// main function
int main()
{
//     entering counts of letters
    cout << "How many latters in your name : ";
    int x;
    cin >> x;
    int y = x - 1;
    
    cout << endl;
    
//     input for array
    char name[y];
    for (int i = 0; i <= y; i++)
    {
        cout << "Enter a letter of your name: ";
        cin >> name[i];
    }
    
    
//     forward printing
    cout << "\nForward > \n     ";
    for(int i = 0; i <= y; i++)
    {
        cout << name[i] << " ";
    }
    cout << "\n";
    
//     backward printing
    cout << "\nBackward > \n     ";
    for (int i = y; i >= 0; i-- )
    {
        cout << name[i] << " ";
    }
    return 0;
} 
// main function



// ------------------------------------------------------------------------------------

// by thecodemonster

#include <iostream>
// #include <cmath>
using namespace std;

// main function
int main()
{
//     int x;
//     cout << "Enter name: ";
//     cin >> 
    char name[] = {'A', 'm', 'h', 'a', 'r'};
    
    for (int i = 0; i <= 4; i++)
    {
        cout << name[i] << "  ";
    }
    cout << endl;
    
    for (int i = 4; i >= 0; i--)
    {
        cout << name[i] << "  ";
    }
    
    
        
    return 0;
} 
// main function
