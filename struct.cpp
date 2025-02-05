#include <iostream>
#include <string>
using namespace std;
// Defining a struct
struct Person {
    string name;
    int age;
    float height;
    // Member function to display person's info
    void displayInfo() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Height: " << height << " meters" << endl;
    }
};
int main() {
    // Creating an object of the struct
    Person person1;
    // Assigning values to the struct members
    person1.name = "XYZ";
    person1.age = 30;
    person1.height = 1.75f;
    // Displaying the values using the struct's member function
    person1.displayInfo();
    return 0;
}
