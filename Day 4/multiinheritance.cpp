#include<iostream>
#include<string>
using namespace std;
class person
{
    protected:
        string name;
        int age;
    public:
        person(string n, int a): name(n), age(a) {}
        void display(){
            cout<<"Name: "<<name<<endl;
            cout<<"Age: "<<age<<endl;
        }
};
class student: virtual public person
{
    private:
        int rollno;
    public:
        student(string n, int a, int r): person(n, a), rollno(r) {}
        void display(){
            person::display();
            cout<<"Roll No: "<<rollno<<endl;
        }
};
class graduatestudent: public student
{
    private:
        string thesis;
    public:
        graduatestudent(string n, int a, int r, string t): person(n, a), student(n, a, r), thesis(t) {}
        void display(){
            student::display();
            cout<<"Thesis: "<<thesis<<endl;
        }
};
class teacher: virtual public person
{
    private:
        double salary;
    public:
        teacher(string n, int a, double s): person(n, a), salary(s) {}
        void display(){
            person::display();
            cout<<"Salary: "<<salary<<endl;
        }
};
class teachingassistant: public student, public teacher
{
    private:
        string department;
    public:
        teachingassistant(string n, int a, int r, double s, string d): person(n, a), student(n, a, r), teacher(n, a, s), department(d) {}
        void display(){
            cout<<"Teaching Assistant Details:"<<endl;
            cout<<"Name: "<<name<<endl;
            cout<<"Age: "<<age<<endl;
            cout<<"Department: "<<department<<endl;
        }
};
int main()
{
    cout<<"===Single Inheritance==="<<endl;
    student s("Alice", 20, 101);
    s.display();
    cout<<"\n===Multilevel Inheritance==="<<endl;
    graduatestudent gs("David", 22, 103, "AI Research");
    gs.display();
    cout<<"\n===Multiple Inheritance==="<<endl;
    teachingassistant ta("Bob", 25, 102, 50000, "Computer Science");
    ta.display();
    cout<<"\n===Hierarchical Inheritance==="<<endl;
    teacher t("Charlie", 40, 60000);
    t.display();
    return 0;
}