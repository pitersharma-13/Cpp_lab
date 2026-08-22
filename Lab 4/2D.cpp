/*Create a class Point that represents a
point in a 2D space with x and y
coordinates. Write methods to set and
get the coordinates.*/
#include<iostream>
using namespace std;
class Point
{
    private:
    int x, y;

    public:
    //set
    void setInfo(int a, int b)
    {
        x = a;
        y = b;
    }
    // get
    int getinfo()
    {
        return x;
    }
    int getInfoy()
    {
        return y;
    }
};
int main()
{
    Point p;
    p.setInfo( 2, 3 );
    p.getinfo();
    cout << " The point on the 2D space is ( " << p.getinfo() <<", " << p.getInfoy() << " )" <<endl;
    return 0;
}