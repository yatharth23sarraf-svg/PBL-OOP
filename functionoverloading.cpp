#include <iostream>
using namespace std;

class Calculator
{
public:
    int add(int a, int b)
    {
        return a + b;
    }
    int add(int a, int b, int c)
    {
        return a + b + c;
    }
    float add(float a, float b)
    {
        return a + b;
    }
};
int main()
{
    Calculator c;
    int a, b, d;
    float x, y;
    cout << "Enter two integers: ";
    cin >> a >> b;
    cout << "Sum of two integers = "
         << c.add(a, b) << endl;
    cout << "\nEnter three integers: ";
    cin >> a >> b >> d;
    cout << "Sum of three integers = "
         << c.add(a, b, d) << endl;
    cout << "\nEnter two floating-point numbers: ";
    cin >> x >> y;
    cout << "Sum of two floating-point numbers = "
         << c.add(x, y) << endl;
    return 0;
}