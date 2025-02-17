//Hierachical Inheritence
#include <iostream>
using namespace std;
class Base {
public:
    void show() {
        cout << "This is the Base class." << endl;
    }
};
class Derived1 : public Base {
public:
    void display1() {
        cout << "This is Derived1 class." << endl;
    }
};
class Derived2 : public Base {
public:
    void display2() {
        cout << "This is Derived2 class." << endl;
    }
};
int main() {
    Derived1 obj1;
    obj1.show();
    obj1.display1();
    Derived2 obj2;
    obj2.show();
    obj2.display2();
    return 0;
}
