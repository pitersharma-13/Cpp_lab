// WAP to input a number and display prime or composite.

#include <iostream>
using namespace std;
class Prime
{
private:
    int num;

public:
    void dataReceive()
    {
        cout << " Enter the Number to check it is Prime or Constant" << endl;
        cin >> num;
    }
    void checkPrime()
    {
        int i, count = 0;
        for (i = 1; i <= num; i++)
        {
            if (num % i == 0)
            {
                count++;
            }
        }
        if (count == 2)
            {
                cout << "the number is prime" << num << endl;
            }
            else 
            {
                cout << " The number is composite"<<num << endl;
            }
    }

    
};

int main()
{
    Prime s;
    s.dataReceive();
    s.checkPrime();
    return 0;
}