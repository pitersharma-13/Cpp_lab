//WAP to input a character and display whether it is vowel or consonant.
#include <iostream>
using namespace std;

int main()
{
    char ch;

    cout << "Enter a character: ";
    cin >> ch;

    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
    {
        cout << "It is a vowel." << endl;
    }
    else
    {
        cout << "It is a consonant." << endl;
    }

    return 0;
}