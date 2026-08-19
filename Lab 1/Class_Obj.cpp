#include <iostream>
using namespace std;
 class Pen
 {
    private:
    int price ;
    string brand ;

    public: 
    void setPen(int p, string b)
    {
        price = p;
        brand = b;
         cout<<"__________________________________" <<endl;
          cout<<"Name : Piter Sharma " <<endl;
          cout <<"Lab 1 Qn 2 " <<endl;
   
    }
    void displayInfo()
    {
         
        
        cout<<"__________________________________" <<endl;
        cout<<"Brand of the Pen :" <<brand <<endl;
        cout<<"Price  of the Pen :" <<price <<endl;
          cout<<"__________________________________" <<endl;

    }
 };

 int main()
 {
    Pen p;
    p.setPen(12,"Natraj");
    p.displayInfo();
    return 0;
 }