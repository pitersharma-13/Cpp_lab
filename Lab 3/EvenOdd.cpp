//WAP to input a number and display even or odd.
#include <iostream>
using namespace std ;
int main()
{
    int num;
    cout << " Enter the number to check whether it is odd or even" << endl;
    cin >> num;
    // using the condition
    if ( num % 2 == 0)
    {
        cout << num << " is even number"<< endl;
    
    }
    else 
    {
        cout << num << " is odd number " <<endl;

    }
    return 0;
}