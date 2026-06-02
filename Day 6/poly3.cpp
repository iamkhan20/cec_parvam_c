#include<iostream>
using namespace std;
class complex
{
    private:
        double real, imag;
    public:
        complex(double r = 0, double i = 0) : real(r), imag(i) {}
        complex operator+(const complex& c) const
        {
            return complex(real + c.real, imag + c.imag);
        }
       complex operator-(const complex& c) const
        {
            return complex(real - c.real, imag - c.imag);
        }
        complex operator-() const
        {
            return complex(-real, -imag);
        }
        bool operator==(const complex& c) const
        {
            return real == c.real && imag == c.imag;
        }
        complex operator++()
        {
            ++real;
            return *this;
        }
        complex operator++(int)
        {
            complex temp = *this;
            ++real;
            return temp;
        }
        double operator[](int index) const
        {
            if (index == 0) return real;
            else if (index == 1) return imag;
            else throw out_of_range("Index must be 0 or 1");
        }
        friend ostream& operator<<(ostream& os, const complex& c);
        friend istream& operator>>(istream& is, complex& c);
};
ostream& operator<<(ostream& os, const complex& c)
{
    os << c.real ;
    if (c.imag >= 0) 
      os << " + " << c.imag << "i";
    else
      os << " - " << -c.imag << "i";
    return os;   
}
istream& operator>>(istream& is, complex& c)
{
    cout << "Enter real part: ";
    is >> c.real;
    cout << "Enter imaginary part: ";
    is >> c.imag;
    return is;
}
int main() {
    complex c1(2.0, 3.0);
    complex c2(1.0, 4.0);   
    cout<<"c1="<<c1<<endl;
    cout<<"c2="<<c2<<endl;  
    cout<<"c1+c2="<<c1+c2<<endl;
    cout<<"c1-c2="<<c1-c2<<endl;
    cout<<"-c1="<<-c1<<endl;
    cout<<"c1==c2: "<<(c1==c2)<<endl;
    cout<<"c1[0]="<<c1[0]<<endl;
    cout<<"c1[1]="<<c1[1]<<endl;
    return 0;
}