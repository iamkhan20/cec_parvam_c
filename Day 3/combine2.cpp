#include <iostream>
using namespace std;
class point
{
private:
    const int x;
    const int y;

public:
    point(int x_val, int y_val) : x(x_val), y(y_val) {}
    void display() const
    {
        cout << "Point: (" << x << ", " << y << ")" << endl;
    }
};
int main()
{
    point p1(10, 20);
    point p2(-5, 15);
    p1.display();
    p2.display();
    return 0;
}