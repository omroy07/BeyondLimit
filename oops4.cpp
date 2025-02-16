#include <iostream>
#include <string>
using namespace std;
class Person {
private:
    string name;
    int age;
public:
    // Default Constructor
    Person() {
        name = "Unknown";
        age = 0;
        cout << "Default constructor called!" << endl;
    }
    // Parameterized Constructor
    Person(string name, int age) {
        this->name = name;
        this->age = age;
        cout << "Parameterized constructor called!" << endl;
    }
    // Constructor with Default Arguments
    Person(string n) {
        name = n;
        this->age = 18; // Default age
        cout << "Constructor with default argument called!" << endl;
    }
    // Copy Constructor
    Person(const Person &other) {
        this->name = other.name;
        this->age = other.age;
        cout << "Copy constructor called!" << endl;
    }
    // Display Information
    void display(){
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};
int main() {
    // Using Default Constructor
    Person person1;
    person1.display();
    // Using Parameterized Constructor
    Person person2("Ram", 25);
    person2.display();
    // Using Constructor with Default Argument
    Person person3("Shyam");
    person3.display();
    // Using Copy Constructor
    Person person4 = person2; // Copy person2 to person4
    person4.display();
    return 0;
}
