#include <iostream>
#include <string>

using namespace std;

class person
{
protected:
    string name;
    int age;

public:
    person() : name(""), age() {}
    person(const string &n, int a) : name(n), age(a) {}
};

class HR : virtual public person
{
protected:
    string hr_id;

public:
    HR() : person(), hr_id("") {}
    HR(const string &n, int a, const string &id) : person(n, a), hr_id(id) {}
    void displayHR() const
    {
        cout << "HR Details - Name: " << name
             << ", Age: " << age
             << ", HR ID: " << hr_id << endl;
    }
};

class lead : virtual public person
{
protected:
    double salary;

public:
    lead() : person(), salary(0.0) {}
    lead(const string &n, int a, double s) : person(n, a), salary(s) {}
    void displayLead() const
    {
        cout << "Lead Details - Name: " << name
             << ", Age: " << age
             << ", Salary: " << salary << endl;
    }
};

class Manager : public HR
{
    string team_name;

public:
    Manager() : HR(), team_name("") {}
    Manager(const string &n, int a, const string &id, const string &team)
        : HR(n, a, id), team_name(team) {}
    void displayManager() const
    {
        cout << "Manager Details - Name: " << name
             << ", Age: " << age
             << ", HR ID: " << hr_id
             << ", Team: " << team_name << endl;
    }
};

class employee : public HR, public lead
{
    string department;

public:
    employee() : person(), HR(), lead(), department("") {}
    employee(const string &n, int a, const string &id, double s, const string &dept)
        : person(n, a), HR(n, a, id), lead(n, a, s), department(dept) {}
    void displayEmployee() const
    {
        cout << "Employee Details - Name: " << name
             << ", Age: " << age
             << ", HR ID: " << hr_id
             << ", Salary: " << salary
             << ", Department: " << department << endl;
    }
};

int main()
{
    HR hr("Asha Patel", 35, "HR101");
    cout << "Single/Hierarchical Inheritance (HR):" << endl;
    hr.displayHR();
    cout << endl;

    Manager mgr("Rohit Singh", 40, "HR201", "Sales");
    cout << "Multilevel Inheritance (Manager):" << endl;
    mgr.displayManager();
    cout << endl;

    employee emp("Priya Kumar", 28, "HR301", 65000.00, "Operations");
    cout << "Multiple/Hybrid Inheritance (Employee):" << endl;
    emp.displayEmployee();
    cout << endl;

    lead ld("Sonal Shah", 38, 85000.00);
    cout << "Hierarchical/Single Inheritance (Lead):" << endl;
    ld.displayLead();
    cout << endl;

    return 0;
}
 