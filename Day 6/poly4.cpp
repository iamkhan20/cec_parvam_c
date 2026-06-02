#include<iostream>
#include<string>
using namespace std;
class animal
{
    public:
    virtual void sound()
    {
        cout<<"Animal makes a sound"<<endl;
    }
    void eat()
    {
        cout<<"Animal eats food"<<endl;
    }
    virtual ~animal() {}
};
class dog : public animal
{
    public:
    void sound() override
    {
        cout<<"Dog barks"<<endl;
    }
    void eat()
    {
        cout<<"Dog eats bones"<<endl;
    }
};
class cat : public animal
{
    public:
    void sound() override
    {
        cout<<"Cat meows"<<endl;
    }
};
int main()
{
    animal*animals[3];
    animals[0] = new animal();
    animals[1] = new dog();
    animals[2] = new cat();
    cout<<"==Virtual Function Calls=="<<endl;
    for(int i=0;i<3;i++)    {
        animals[i]->sound();
    }
    cout<<"==Non-Virtual Function Calls=="<<endl;
    for(int i=0;i<3;i++)    {
        animals[i]->eat();
    }
    for(int i=0;i<3;i++) {
        delete animals[i];
    }
    return 0;
}