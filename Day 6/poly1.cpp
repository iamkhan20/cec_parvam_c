#include<iostream>
#include<string>
using namespace std;
class calculator
{
    public:
    int add(int a,int b)
    {
        cout<<"int + int "<<endl;
        return a+b;
    }
    double add(double a,double b)
    {
        cout<<"double + double "<<endl;
        return a+b;
    }
    int add(int a,int b,int c)
    {
        cout<<"int + int + int "<<endl;
        return a+b+c;
    }
    double add(int a,double b)
    {
        cout<<"int + double "<<endl;
        return a+b;
    }
    string add(string a,string b)
    {
        cout<<"string + string "<<endl;
        return a+b;
    }
};
int main()
{
    calculator calc;
    cout<<calc.add(5,10)<<endl;
    cout<<calc.add(5.5,10.5)<<endl;
    cout<<calc.add(5,10,15)<<endl;
    cout<<calc.add(5,10.5)<<endl;
    cout<<calc.add("Hello"," World")<<endl;
    return 0;
}