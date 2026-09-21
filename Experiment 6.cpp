```cpp
#include <iostream>
using namespace std;

// Class for performing operations on complex numbers
class arithmetic
{
    public:

    // Real and imaginary parts of a complex number
    int real;
    int imaginary;

    // Function to take input
    void insert();

    // Overloading + operator for addition
    arithmetic operator+(arithmetic x);

    // Overloading - operator for subtraction
    arithmetic operator-(arithmetic x);

    // Function to display complex number
    void display();
};


// Function to take input for a complex number
void arithmetic::insert()
{
    cout << "Enter real part: ";
    cin >> real;

    cout << "Enter imaginary part: ";
    cin >> imaginary;
}


// Overloading + operator
arithmetic arithmetic::operator+(arithmetic x)
{
    // Temporary object to store the addition result
    arithmetic temp;

    // Add real parts of the two complex numbers
    temp.real = real + x.real;

    // Add imaginary parts of the two complex numbers
    temp.imaginary = imaginary + x.imaginary;

    // Return the result
    return temp;
}


// Overloading - operator
arithmetic arithmetic::operator-(arithmetic x)
{
    // Temporary object to store the subtraction result
    arithmetic temp;

    // Subtract real parts of the two complex numbers
    temp.real = real - x.real;

    // Subtract imaginary parts of the two complex numbers
    temp.imaginary = imaginary - x.imaginary;

    // Return the result
    return temp;
}


// Function to display a complex number
void arithmetic::display()
{
    cout << real << "+" << imaginary << "j" << endl;
}


int main()
{
    // Create two objects for two different complex numbers
    arithmetic First;
    arithmetic Second;

    // Objects to store results
    arithmetic Sum;
    arithmetic Difference;

    // Input for first complex number
    cout << "Enter first complex number:" << endl;
    First.insert();

    // Input for second complex number
    cout << "\nEnter second complex number:" << endl;
    Second.insert();

    // Addition of FIRST and SECOND complex numbers
    Sum = First + Second;

    // Subtraction of FIRST and SECOND complex numbers
    Difference = First - Second;

    // Display first complex number
    cout << "\nFirst complex number: ";
    First.display();

    // Display second complex number
    cout << "Second complex number: ";
    Second.display();

    // Display addition result
    cout << "\nAddition of the two complex numbers: ";
    Sum.display();

    // Display subtraction result
    cout << "Subtraction of the two complex numbers: ";
    Difference.display();

    return 0;
}
```
