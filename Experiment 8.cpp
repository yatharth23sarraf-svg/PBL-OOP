```cpp
#include <iostream>
using namespace std;

// First base class
// This class stores the basic information of an employee
class Employee
{
protected:
    int emp_id;
    string name;
    int current_age;

public:

    // Function to accept employee basic information
    void getEmployee()
    {
        cout << "Enter Employee ID: ";
        cin >> emp_id;

        cout << "Enter Employee Name: ";
        cin >> name;

        cout << "Enter Current Age: ";
        cin >> current_age;
    }

    // Function to display employee basic information
    void displayEmployee()
    {
        cout << "\nEmployee ID: " << emp_id;
        cout << "\nEmployee Name: " << name;
        cout << "\nCurrent Age: " << current_age;
    }
};


// Second base class
// This class stores retirement-related information
class Retirement
{
protected:
    int retirement_age;

public:

    // Function to accept retirement age
    void getRetirement()
    {
        cout << "Enter Retirement Age: ";
        cin >> retirement_age;
    }
};


// Derived class
// EmployeeDetails inherits from both Employee and Retirement
// This is called Multiple Inheritance
class EmployeeDetails : public Employee, public Retirement
{
public:

    // Function to calculate remaining years until retirement
    void calculate()
    {
        int remaining_years;

        // Calculate remaining years
        remaining_years = retirement_age - current_age;

        // Display employee information
        displayEmployee();

        // Display retirement age
        cout << "\nRetirement Age: " << retirement_age;

        // Check whether the employee has years remaining
        if (remaining_years > 0)
        {
            cout << "\nRemaining Years Until Retirement: "
                 << remaining_years;
        }

        // If remaining years are zero,
        // the employee has reached retirement age
        else if (remaining_years == 0)
        {
            cout << "\nEmployee is due for retirement.";
        }

        // If remaining years are negative,
        // the employee has already crossed retirement age
        else
        {
            cout << "\nEmployee has already crossed retirement age.";
        }
    }
};


// Main function
// Program execution starts from here
int main()
{
    // Create an object of the derived class
    // This object can access members of both base classes
    EmployeeDetails e;

    // Accept employee basic information
    e.getEmployee();

    // Accept retirement information
    e.getRetirement();

    // Calculate and display remaining years
    e.calculate();

    return 0;
}
```
