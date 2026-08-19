//WAP to input two numbers and display the largest one.
#include<iostream>
using namespace std;
int main()
{
    int num1,num2;
    cout << " Enter the two number : "<<endl;
    cin >> num1 >> num2;
    //using the condition to check the lagrest one 
    if (num1 > num2 )
    {
        cout << " Largest one : " << num1  << endl;
    }
    else if ( num1 < num2 )
    {
        cout << " Lagrest one : " <<num2 << endl;
    }
    else
    {
        cout << "Both is equal : " << num1 << " and " << num2 << endl;
    }
    return 0;
}