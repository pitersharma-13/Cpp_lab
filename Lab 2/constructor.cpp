#include<iostream>
using namespace std;

class Mobile
{
    private:
    int Price;
    string brand;
    string model;

    public:
    Mobile() 
    {
         cout<<"__________________________________" <<endl;
    cout<<"Name : Piter Sharma " <<endl;
    cout <<"Lab 2 Qn 1 & 2 " <<endl;
    cout<<"__________________________________" <<endl;
        cout<<" 1:   Default constructor is Working" <<endl;
          cout<<"__________________________________" <<endl;

    }
    Mobile(int p,string b, string m)
    {
        brand = b;
        Price = p;
        model = m;
        cout<<" 2:   Parameterized Constructor is working"<<endl;
          cout<<"__________________________________" <<endl;
          
    }

    Mobile (const Mobile &m)
    {
        brand = m.brand;
        Price = m.Price + 120;
        model = m.model;
        cout <<" 3:    Copy Constructor is working" <<endl;
        cout<<"__________________________________" <<endl;
    }
    void infoDisplay()
    {
        cout<<"__________________________________" <<endl;
        cout<<"The Brand name of the Mobile :" <<brand <<endl;
        cout<<"The Price of the Mobile :" <<Price <<endl;
        cout<<"The Model of the Mobile :" <<model <<endl;
        cout<<"__________________________________" <<endl;
          

    }
};

int main()
{
    Mobile m;
    Mobile p(11,"Samsung","Aa");
     p.infoDisplay();
    Mobile p1(p);
    p1.infoDisplay();
    Mobile p2 = p1;
   p2.infoDisplay();
    return 0;
}