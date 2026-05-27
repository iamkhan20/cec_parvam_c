#include<iostream>
#include<string>
using namespace std;
class student
{
    public:
    string name;
    int age;
    double cgpa;
    student(string n, int a, double c)
    {
        name=n;
        age=a;
        cgpa=c;
        cout<<"Parameterized constructor called "<<name<<endl;
    }
    void display()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"CGPA: "<<cgpa<<endl;
    }
};
int main()
{
    student s1("Alice", 20, 3.5);
    s1.display();
    student s2("Bob", 22, 3.8);
    s2.display();
    return 0;
}