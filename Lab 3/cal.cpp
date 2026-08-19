//WAP to input two numbers and display their sum, difference, product and division using class.
#include<iostream>
using namespace std;
class cal
{
    private:
    int num1 , num2 ;

    public:
    void numInfo()
    {
        cout<< " Enter the first number" <<endl;
        cin >> num1;
        cout << " Enter the second number "<<endl;
        cin >> num2 ;
    }
    void diplayInfo()
    {
        cout << " Sum : " <<num1 + num2 <<endl;
        cout << " Difference : " << num1 - num2 <<endl;
        cout << " Product : " << num1 * num2 <<endl;
        cout << " Division : " << num1 / num2 <<endl;

    }
};

int main()
{
    cal s;
    s.numInfo();
    s.diplayInfo();
    return 0;
}
