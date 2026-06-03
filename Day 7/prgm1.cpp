#include<iostream>
#include<string>
using namespace std;
    class product
    {
        private:
        int id;
        string name;
        float price;
        public:
        product() : id(0), name(""), price(0.0) {}
        product(int i, string n, float p) : id(i), name(n), price(p) {}
        void display() const
        {
            cout<<"ID: "<<id<<", Name: "<<name<<", Price: "<<price<<endl;
        }
    };
int main()
{
    int count;
    cout<<"Enter number of products: ";     
    cin>>count;
    product* inventory = new product[count];
    for(int i=0; i<count; i++)
    {
        inventory[i] = product(i+1, "Product" + to_string(i+1), (i+1)*10.0);
    }
    cout<<"Product Inventory:"<<endl;
    for(int i=0; i<count; i++)
    {
        inventory[i].display();
    }
    delete[] inventory; // Deallocate the array of products
    return 0;
}