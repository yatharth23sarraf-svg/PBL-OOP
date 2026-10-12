
#include <iostream>
using namespace std;

// Base class
class Delivery
{
protected:
    float amount;

public:
    // Function to accept purchase amount
    void input()
    {
        cout << "Enter purchase amount: ";
        cin >> amount;
    }

    // Virtual function for calculating delivery charges
    virtual void calculateCharges()
    {
        cout << "No delivery charges";
    }
};

// Derived class 1
class HomeDelivery : public Delivery
{
public:
    // Override the base class virtual function
    void calculateCharges() override
    {
        cout << "Home Delivery Charges: Rs. 50" << endl;
        cout << "Total Amount: Rs. " << amount + 50;
    }
};

// Derived class 2
class StorePickup : public Delivery
{
public:
    // Override the base class virtual function
    void calculateCharges() override
    {
        cout << "Store Pickup Charges: Rs. 0" << endl;
        cout << "Total Amount: Rs. " << amount;
    }
};

int main()
{
    HomeDelivery h;
    StorePickup s;

    // Base class pointer
    Delivery *d;

    // Demonstrate run-time polymorphism for home delivery
    d = &h;
    d->input();
    d->calculateCharges();

    cout << endl << endl;

    // Demonstrate run-time polymorphism for store pickup
    d = &s;
    d->input();
    d->calculateCharges();

    return 0;
}