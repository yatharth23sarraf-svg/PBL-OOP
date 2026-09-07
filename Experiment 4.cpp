#include <iostream>
using namespace std;

class arithmetic
{
public:
    int First_real;
    int First_imaginary;
    int Second_real;
    int Second_imaginary;

    int Sum_real;
    int Sum_imaginary;

    int Sub_real;
    int Sub_imaginary;

    int Multi_real;
    int Multi_imaginary;

    float Divi_real;
    float Divi_imaginary;

    int Sq_First_real;
    int Sq_First_imaginary;
    int Sq_Second_real;
    int Sq_Second_imaginary;

    void insert();
    void sum();
    void sub();
    void multi();
    void divi();
    void square();
    void display();
};

void arithmetic::insert()
{
    cout << "Enter first real part: ";
    cin >> First_real;

    cout << "Enter first imaginary part: ";
    cin >> First_imaginary;

    cout << "Enter second real part: ";
    cin >> Second_real;

    cout << "Enter second imaginary part: ";
    cin >> Second_imaginary;
}

void arithmetic::sum()
{
    Sum_real = First_real + Second_real;
    Sum_imaginary = First_imaginary + Second_imaginary;

    cout << "Sum = " << Sum_real << " + "
         << Sum_imaginary << "j" << endl;
}

void arithmetic::sub()
{
    Sub_real = First_real - Second_real;
    Sub_imaginary = First_imaginary - Second_imaginary;

    cout << "Difference = " << Sub_real << " + "
         << Sub_imaginary << "j" << endl;
}

void arithmetic::multi()
{
    Multi_real = (First_real * Second_real)
               - (First_imaginary * Second_imaginary);

    Multi_imaginary = (First_real * Second_imaginary)
                    + (First_imaginary * Second_real);

    cout << "Product = " << Multi_real << " + "
         << Multi_imaginary << "j" << endl;
}

void arithmetic::divi()
{
    int denominator;

    denominator = (Second_real * Second_real)
                + (Second_imaginary * Second_imaginary);

    if (denominator == 0)
    {
        cout << "Division by zero is not possible." << endl;
        return;
    }

    Divi_real = (float)((First_real * Second_real)
               + (First_imaginary * Second_imaginary))
               / denominator;

    Divi_imaginary = (float)((First_imaginary * Second_real)
                    - (First_real * Second_imaginary))
                    / denominator;

    cout << "Division = " << Divi_real << " + "
         << Divi_imaginary << "j" << endl;
}

void arithmetic::square()
{
    Sq_First_real = (First_real * First_real)
                  - (First_imaginary * First_imaginary);

    Sq_First_imaginary = 2 * First_real * First_imaginary;

    Sq_Second_real = (Second_real * Second_real)
                   - (Second_imaginary * Second_imaginary);

    Sq_Second_imaginary = 2 * Second_real * Second_imaginary;

    cout << "Square of first number = "
         << Sq_First_real << " + "
         << Sq_First_imaginary << "j" << endl;

    cout << "Square of second number = "
         << Sq_Second_real << " + "
         << Sq_Second_imaginary << "j" << endl;
}

void arithmetic::display()
{
    cout << "\nFirst number = "
         << First_real << " + "
         << First_imaginary << "j" << endl;

    cout << "Second number = "
         << Second_real << " + "
         << Second_imaginary << "j" << endl;
}

int main()
{
    arithmetic z;
    int choice;

    z.insert();

    do
    {
        cout << "\n========== COMPLEX NUMBER CALCULATOR ==========" << endl;
        cout << "1. Display Complex Numbers" << endl;
        cout << "2. Addition" << endl;
        cout << "3. Subtraction" << endl;
        cout << "4. Multiplication" << endl;
        cout << "5. Division" << endl;
        cout << "6. Square" << endl;
        cout << "7. Exit" << endl;

        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice)
        {
            case 1:
                z.display();
                break;

            case 2:
                z.sum();
                break;

            case 3:
                z.sub();
                break;

            case 4:
                z.multi();
                break;

            case 5:
                z.divi();
                break;

            case 6:
                z.square();
                break;

            case 7:
                cout << "Exiting program..." << endl;
                break;

            default:
                cout << "Invalid choice! Please try again." << endl;
        }

    } while (choice != 7);

    return 0;
}