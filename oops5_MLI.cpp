//Multi-level Inheritence
#include <iostream>
using namespace std;
class Base {
public:
    void show(){
        cout << "This is the Base class." << endl;
    }
};
class Intermediate : public Base {
public:
    void displayIntermediate() {
        cout << "This is the Intermediate class." << endl;
    }
};
class Derived : public Intermediate {
public:
    void displayDerived() {
        cout << "This is the Derived class." << endl;
    }
};
int main() {
    Derived obj;
    obj.show();              // From Base
    obj.displayIntermediate(); // From Intermediate
    obj.displayDerived();      // From Derived
    return 0;
}
