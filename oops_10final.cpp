#include <iostream>
#include <vector>
#include <string>
using namespace std;
// Abstract class (Abstraction)
class Shape {
public:
    virtual void draw() = 0; // Pure virtual function
    virtual ~Shape() {}     // Virtual destructor
};
// Derived class for Circle (Inheritance and Polymorphism)
class Circle : public Shape {
    double radius;
public:
    Circle(double r) : radius(r) {}
    void draw() override {
        cout << "Drawing Circle with radius: " << radius << endl;
    }
};
// Derived class for Rectangle (Inheritance and Polymorphism)
class Rectangle : public Shape {
    double width, height;
public:
    Rectangle(double w, double h) : width(w), height(h) {}
    void draw() override {
        cout << "Drawing Rectangle with width: " << width << " and height: " << height << endl;
    }
};
// Class demonstrating Encapsulation
class BankAccount {
private:
    double balance;
public:
    BankAccount(double initialBalance) : balance(initialBalance) {}
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited: " << amount << ". New balance: " << balance << endl;
        } else {
            cout << "Invalid deposit amount!" << endl;
        }
    }
    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrew: " << amount << ". New balance: " << balance << endl;
        } else {
            cout << "Invalid withdrawal amount!" << endl;
        }
    }
    double getBalance() const {
        return balance;
    }
};
// Class demonstrating Function Overloading
class Calculator {
public:
    int add(int a, int b) {
        return a + b;
    }
    double add(double a, double b) {
        return a + b;
    }
};
// Class demonstrating Operator Overloading
class Complex {
    double real, imag;
public:
    Complex(double r, double i) : real(r), imag(i) {}
    Complex operator+(const Complex &other) {
        return Complex(real + other.real, imag + other.imag);
    }
    void display() const {
        cout << real << " + " << imag << "i" << endl;
    }
};
// Main function demonstrating all concepts
int main() {
    // Polymorphism and Abstraction
    Shape *circle = new Circle(5.5);
    Shape *rectangle = new Rectangle(4.0, 6.0);
    circle->draw();
    rectangle->draw();
    delete circle;
    delete rectangle;
    // Encapsulation
    BankAccount account(10000);
    account.deposit(5000);
    account.withdraw(3000);
    cout << "Final balance: " << account.getBalance() << endl;
    // Function Overloading
    Calculator calc;
    cout << "Sum (int): " << calc.add(3, 4) << endl;
    cout << "Sum (double): " << calc.add(3.5, 4.2) << endl;
    // Operator Overloading
    Complex c1(2.3, 4.5), c2(1.2, 3.8);
    Complex c3 = c1 + c2;
    cout << "Sum of Complex Numbers: ";
    c3.display();
    return 0;
}
