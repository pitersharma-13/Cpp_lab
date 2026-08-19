// WAP to input age and display whether the person is eligible for voting or not.

#include<iostream>
using namespace std;
int main ()
{
    int age ;
    cout << " Enter your age " << endl;
    cin >> age;

    // using  the if else to check the condition
    if ( age >= 18)
    {
        
        cout << "You are elegible for the Voting in the Nepal"<<endl;
    }
    else 
    {
        cout << " You arenot elegible for the voting in the Nepal " <<endl;
    }
    return 0;
}