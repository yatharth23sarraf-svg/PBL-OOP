#include <iostream>
using namespace std;

class Employee
{
public:
    void employee(string name)
    {
        cout << "\nEmployee Name: " << name << endl;
    }
    void employee(string name, int id)
    {
        cout << "\nEmployee Name: " << name << endl;
        cout << "Employee ID: " << id << endl;
    }
    void employee(string name, int id, float salary)
    {
        cout << "\nEmployee Name: " << name << endl;
        cout << "Employee ID: " << id << endl;
        cout << "Employee Salary: " << salary << endl;
    }
};

int main()
{
    Employee e;

    string name;
    int id;
    float salary;

    cout << "Enter employee name: ";
    cin >> name;
    e.employee(name);

    cout << "\nEnter employee name and ID: ";
    cin >> name >> id;
    e.employee(name, id);

    cout << "\nEnter employee name, ID and salary: ";
    cin >> name >> id >> salary;
    e.employee(name, id, salary);

    return 0;
}
