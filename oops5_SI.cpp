//Single Inheritence
#include <iostream>
using namespace std;
class Base {
public:
    void show() {
        cout << "This is the Base class." << endl;
    }
};
class Derived : public Base {
public:
    void display() {
        cout << "This is the Derived class." << endl;
    }
};
int main() {
    Derived obj;
    obj.show();   // Inherited from Base
    obj.display(); // Defined in Derived
    return 0;
}
