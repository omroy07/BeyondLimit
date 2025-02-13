#include <iostream>
using namespace std;
// Define a class "Car"
class Car {
private:
    // Private attributes: only accessible within the class
    string brand;
    string model;
    int year;
public:
    // Constructor to initialize the object
    Car(string b, string m, int y) {
        brand = b;
        model = m;
        year = y;
    }
    // Public method to display car details
    void displayInfo() {
        cout << "Car Brand: " << brand << endl;
        cout << "Car Model: " << model << endl;
        cout << "Year: " << year << endl;
    }
    // Getter method for brand (encapsulation)
    string getBrand() {
        return brand;
    }
    // Setter method for brand (encapsulation)
    void setBrand(string b) {
        brand = b;
    }
    // Getter method for model (encapsulation)
    string getModel() {
        return model;
    }
    // Setter method for model (encapsulation)
    void setModel(string m) {
        model = m;
    }
    // Getter method for year (encapsulation)
    int getYear() {
        return year;
    }
    // Setter method for Year (encapsulation)
    void setYear(int y) {
        year = y;
    }

};
int main() {
    // Creating an object of Car class
    Car car1("Honda", "Corolla", 2020);
    // Accessing the object's method to display information
    car1.displayInfo();
    // Changing the car's brand using setter
    car1.setBrand("Toyota");
    car1.setModel("Fortuner");
    car1.setYear(2022);
    // Display updated information
    cout << "Updated Brand: " << car1.getBrand() << endl;
    cout << "Updated Model: " << car1.getModel() << endl;
    cout << "Updated Year: " << car1.getYear() << endl;
    return 0;
}
