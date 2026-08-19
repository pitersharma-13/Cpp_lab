//WAP to input three numbers and display the middle one.
#include<iostream>
using namespace std ;
int main ()
{
    int n1, n2, n3;
    cout <<" Enter the three number " <<endl;
    cin >>n1>>n2>>n3;
  if ((n1 >= n2 && n1 <= n3) || (n1 <= n2 && n1 >= n3))
    cout << "Middle number: " << n1 << endl;
else if ((n2 >= n1 && n2 <= n3) || (n2 <= n1 && n2 >= n3))
    cout << "Middle number: " << n2 << endl;
else
    cout << "Middle number: " << n3 << endl;
    return 0;
}