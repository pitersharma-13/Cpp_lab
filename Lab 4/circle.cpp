/* Define a class Circle with a member for the radius.
   Write methods to calculate the circumference and area of the circle.*/

#include<iostream>
#define PI 3.14159  
using namespace std;


class Circle
{
    private:
    // Private members - data hiding principle
    float radius;          
    float area;          
    float Circumference;    
    
    public:
    // Method to take input from user
    void inputTaken()
    {
        cout << " Enter the radius of the circle : " << endl;
        cin >> radius;  // Read radius from user input
    }
    void calcuArea()
    {
        area = PI * radius * radius;
    }
    
    
    
    void calcCircumferemce()
    {
        Circumference = 2 * PI * radius;
    }
    
    
    void displayInfo()
    {
        cout << " Area = " << area;
        cout << " Circumference = " << Circumference;
    }
};


int main()
{
    Circle c;            
    c.inputTaken();      
    c.calcuArea();       
    c.calcCircumferemce(); 
    c.displayInfo();      
    return 0;
}