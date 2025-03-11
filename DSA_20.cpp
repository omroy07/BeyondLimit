// #include <iostream>
// using namespace std;
// int main() {
//     string name;
//     cout << "Enter your name: ";
//     cin >> name;  // Takes input
//     cout << "Hello, " << name << "!" << endl;  // Prints output
//     return 0;
// }

// #include <iostream>
// #include <string>
// using namespace std;
// int main() {
//     string fullName;
//     cout << "Enter your full name: ";
//     getline(cin, fullName);  // Takes input including spaces
//     cout << "Welcome, " << fullName << "!" << endl;
//     return 0;
// }

#include <iostream>
using namespace std;
int main() {
    int age;
    double height;
    cout << "Enter your age: ";
    cin >> age;
    cout << "Enter your height (in cm): ";
    cin >> height;
    cout << "You are " << age << " years old and " << height << " cm tall." << endl;
    return 0;
}
