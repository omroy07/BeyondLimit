#include <iostream>
using namespace std;
// Define a simple class
class Person {
public:
    // Data members
    string name;
    int age;
    // Member function to display person info
    void display() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};
int main() {
    // Create an object of class Person
    Person person1;
    // Assign values to the object's data members
    person1.name = "Kira";
    person1.age = 10;
    // Call the member function
    person1.display();
    return 0;
}
