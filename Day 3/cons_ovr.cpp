#include<iostream>
#include<string>
using namespace std;
class rectangle
{
    private:
    double length;
    double width;
    public:
    rectangle()
    {
        length=0.0;
        width=0.0;
        cout<<"Default constructor called"<<endl;
    } 
    rectangle(double side)
    {
        length=side;
        width=side;
        cout<<"Square constructor called"<<endl;
    }
    rectangle(double l, double w)
    {
        length=l;
        width=w;
        cout<<"Rectangle constructor called"<<endl;
    }
    double area()
    {
        return length*width;
    }
};
int main()
{
    rectangle r1;
    cout<<"Area of r1: "<<r1.area()<<endl;
    rectangle r2(5.0);
    cout<<"Area of r2: "<<r2.area()<<endl;
    rectangle r3(4.0, 6.0);
    cout<<"Area of r3: "<<r3.area()<<endl;
    return 0;
}