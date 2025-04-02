#include <iostream>
#include <string>  // Required for using string data type
using namespace std;
int main() {
    // Integer variable
    int age = 25;
    // Floating-point variable
    float height = 5.9;
    // Double (higher precision floating-point)
    double pi = 3.14159;
    // Character variable
    char grade = 'A';
    // Boolean variable
    bool isStudent = true;
    // String variable (needs #include <string>)
    string name = "XYZS";
    // Displaying values
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Height: " << height << " feet" << endl;
    cout << "PI Value: " << pi << endl;
    cout << "Grade: " << grade << endl;
    cout << "Is Student: " << (isStudent ? "Yes" : "No") << endl;
    return 0;
}
