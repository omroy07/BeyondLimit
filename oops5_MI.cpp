//Multiple Inheritence
#include <iostream>
using namespace std;
class Class1 {
public:
    void show1() {
        cout << "This is Class1." << endl;
    }
};
class Class2 {
public:
    void show2() {
        cout << "This is Class2." << endl;
    }
};
class Derived : public Class1, public Class2 {
public:
    void display() {
        cout << "This is the Derived class inheriting Class1 and Class2." << endl;
    }
};
int main() {
    Derived obj;
    obj.show1();
    obj.show2();
    obj.display();
    return 0;
}

