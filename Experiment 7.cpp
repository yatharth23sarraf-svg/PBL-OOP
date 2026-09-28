
#include <iostream>
using namespace std;

// Class to represent a complex number
class Complex
{
    int real;
    int imaginary;

public:

    // Constructor
    Complex()
    {
        real = 0;
        imaginary = 0;
    }

    // Function to accept a complex number
    void accept()
    {
        cout << "Enter real part: ";
        cin >> real;

        cout << "Enter imaginary part: ";
        cin >> imaginary;
    }

    // Overloading + operator
    Complex operator+(Complex c)
    {
        // Create an object to store the result
        Complex temp;

        // Add the real parts
        temp.real = real + c.real;

        // Add the imaginary parts
        temp.imaginary = imaginary + c.imaginary;

        // Return the result
        return temp;
    }

    // Overloading - operator
    Complex operator-(Complex c)
    {
        // Create an object to store the result
        Complex temp;

        // Subtract the real parts
        temp.real = real - c.real;

        // Subtract the imaginary parts
        temp.imaginary = imaginary - c.imaginary;

        // Return the result
        return temp;
    }

    // Function to display the complex number
    void display()
    {
        cout << real << " + " << imaginary << "i" << endl;
    }
};


int main()
{
    // Create objects for two complex numbers
    Complex First;
    Complex Second;

    // Objects to store the results
    Complex Sum;
    Complex Difference;

    // Accept the first complex number
    cout << "Enter first complex number:" << endl;
    First.accept();

    // Accept the second complex number
    cout << "\nEnter second complex number:" << endl;
    Second.accept();

    // Perform addition using overloaded + operator
    Sum = First + Second;

    // Perform subtraction using overloaded - operator
    Difference = First - Second;

    // Display the first complex number
    cout << "\nFirst complex number: ";
    First.display();

    // Display the second complex number
    cout << "Second complex number: ";
    Second.display();

    // Display addition result
    cout << "\nAddition: ";
    Sum.display();

    // Display subtraction result
    cout << "Subtraction: ";
    Difference.display();

    return 0;
}

