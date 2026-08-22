/*Define a class Person with private
members for the person&#39;s name and age.
Write methods to set and get these
values.*/
#include<iostream>
using namespace std;
class Person 

{
    private:
    int age;
    string name;

    public:
    //set
    void infoTaken(int a, string n) //initilization
    {
        age = a;
        name = n;

    }
    //get
    string getname()
    {
        return name;
    }
    int getage()
    {
        return age;
    }
};
int main()
{
    Person p;
    p.infoTaken(20, "Piter");
    cout << "Name : " << p.getname() <<endl;
    cout << "Age : " << p.getage() <<endl;
    return 0;

}
