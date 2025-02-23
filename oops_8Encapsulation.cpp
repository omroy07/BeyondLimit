#include <iostream>
#include <string>
using namespace std;
class Person {
private:
    // Private data members (encapsulated)
    string name;
    int age;
public:
    // Constructor
    Person(string n, int a) : name(n), age(a) {}
    // Getter for 'name'
    string getName() const {
        return name;
    }
    // Setter for 'name'
    void setName(const string& n) {
        name = n;
    }
    // Getter for 'age'
    int getAge() const {
        return age;
    }
    // Setter for 'age'
    void setAge(int a) {
        if (a >= 0) { // Ensuring a valid age
            age = a;
        } else {
            cout << "Invalid age!" <<endl;
        }
    }
    // Display details
    void display() const {
        cout << "Name: " << name << ", Age: " << age <<endl;
    }
};
int main() {
    // Creating an object of the class
    Person person("Ram", 25);
    // Accessing private members via public methods
    person.display();
    // Modifying the encapsulated data using setters
    person.setName("Shyam");
    person.setAge(30);
    // Display updated details
    person.display();
    // Trying to set an invalid age
    person.setAge(-1);
    return 0;
}
