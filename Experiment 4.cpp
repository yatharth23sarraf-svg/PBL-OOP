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
    void insert(int a,int b,int c,int d);
    void sum();
    void sub();
    void multi();
    void divi();
    void square();
    void display();
};
void arithmetic::insert(int a,int b,int c,int d)
{
    cout<<"Enter first real part: ";
    cin>>a;
    cout<<"Enter first imaginary part: ";
    cin>>b;
    cout<<"Enter second real part: ";
    cin>>c;
    cout<<"Enter second imaginary part: ";
    cin>>d;
    First_real=a;
    First_imaginary=b;
    Second_real=c;
    Second_imaginary=d;
}
void arithmetic::sum()
{
    Sum_real = First_real + Second_real;
    Sum_imaginary = First_imaginary + Second_imaginary;
}
void arithmetic::sub()
{
    Sub_real = First_real - Second_real;
    Sub_imaginary = First_imaginary - Second_imaginary;
}
void arithmetic::multi()
{
    Multi_real = (First_real * Second_real) - (First_imaginary * Second_imaginary);
    Multi_imaginary = (First_real * Second_imaginary) + (First_imaginary * Second_real);
}
void arithmetic::divi()
{
    Divi_real = (float)((First_real * Second_real) + (First_imaginary * Second_imaginary))
                /
                ((Second_real * Second_real) + (Second_imaginary * Second_imaginary));

    Divi_imaginary = (float)((First_imaginary * Second_real) - (First_real * Second_imaginary))
                     /
                     ((Second_real * Second_real) + (Second_imaginary * Second_imaginary));

}
void arithmetic::square()
{
    Sq_First_real = ((First_real*First_real) - (First_imaginary*First_imaginary));
    Sq_First_imaginary = (2*(First_real*First_imaginary));
    Sq_Second_real = ((Second_real*Second_real) - (Second_imaginary*Second_imaginary));
    Sq_Second_imaginary = (2*(Second_real*Second_imaginary));
}
void arithmetic::display()
{
    cout<<"First number is = "<<First_real<<"+"<<First_imaginary<<"j"<<endl;
    cout<<"Second number is = "<<Second_real<<"+"<<Second_imaginary<<"j"<<endl;
    cout<<"Sum of the 2 numbers is: "<<Sum_real<<"+"<<Sum_imaginary<<"j"<<endl;
    cout<<"Difference of the 2 numbers is: "<<Sub_real<<"+"<<Sub_imaginary<<"j"<<endl;
    cout<<"Product of the 2 numbers is: "<<Multi_real<<"+"<<Multi_imaginary<<"j"<<endl;
    cout<<"Division of the 2 numbers is: "<<Divi_real<<"+"<<Divi_imaginary<<"j"<<endl;
    cout<<"Square of first number is: "<<Sq_First_real<<"+"<<Sq_First_imaginary<<"j"<<endl;
    cout<<"Square of second number is: "<<Sq_Second_real<<"+"<<Sq_Second_imaginary<<"j"<<endl;

}
int main()
{
    arithmetic z;
    int a,b,c,d;
    z.insert(a,b,c,d);
    z.sum();
    z.sub();
    z.multi();
    z.divi();
    z.square();
    z.display();
    return 0;
}
