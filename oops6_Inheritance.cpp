#include <iostream>
#include <string>
using namespace std;
// Base class
class Vehicle {
protected:
    string brand;
    string model;
public:
    Vehicle(string b, string m) : brand(b), model(m) {}
    virtual void displayInfo() { // Virtual function for polymorphism
        cout << "Brand: " << brand << ", Model: " << model << endl;
    }
};
// Derived class 1
class Car : public Vehicle {
private:
    int doors;
public:
    Car(string b, string m, int d) : Vehicle(b, m), doors(d) {}
    void displayInfo() override { // Override the base class method
        Vehicle::displayInfo();
        cout << "Doors: " << doors << endl;
    }
};
// Derived class 2
class Bike : public Vehicle {
private:
    bool hasGears;
public:
    Bike(string b, string m, bool g) : Vehicle(b, m), hasGears(g) {}
    void displayInfo() override { // Override the base class method
        Vehicle::displayInfo();
        cout << "Has Gears: " << (hasGears ? "Yes" : "No") << endl;
    }
};
int main() {
    // Create a Car object
    Vehicle v("xyz","R15");
    v.displayInfo();
    Car car("Toyota", "Fortuner", 4);
    car.displayInfo();
    cout << endl;
    // Create a Bike object
    Bike bike("Hero", "Splendor", true);
    bike.displayInfo();
    return 0;
}
