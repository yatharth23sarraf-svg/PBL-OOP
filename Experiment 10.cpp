
#include <iostream>
using namespace std;

int main()
{
    float a, b;

    // Accept two floating-point numbers
    cout << "Enter two floating-point numbers: ";
    cin >> a >> b;

    cout << "Before try" << endl;

    // Try block contains code that may cause an exception
    try
    {
        cout << "Inside try" << endl;

        // Check whether the denominator is zero
        if (b == 0)
        {
            // Throw an exception if division by zero is attempted
            throw b;
        }

        // Perform division if the denominator is not zero
        cout << "Division: " << a / b << endl;
    }

    // Catch block handles the thrown exception
    catch (float b)
    {
        cout << "Exception Caught: Division by zero is not allowed!" << endl;
    }

    // This statement executes after the exception is handled
    cout << "After catch" << endl;

    return 0;
}