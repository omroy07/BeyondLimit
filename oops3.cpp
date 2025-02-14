//DEFAULT CONSTRUCTOR
class MyClass {
public:
    MyClass() { 
        cout << "Default constructor called!" <<endl;
    }
};
//PARAMETERIZED CONSTRUCTOR
class MyClass {
public:
    int x;
    MyClass(int val) { 
        x = val;
        cout << "Parameterized constructor called with value: " << x <<endl;
    }
};
//COPY CONSTRUCTOR
class MyClass {
public:
    int x;
    MyClass(int val) { x = val; }
    MyClass(const MyClass &obj) { 
        x = obj.x;
        cout << "Copy constructor called!" <<endl;
    }
};
//MOVE CONSTRUCTOR(C++11):- transfer the ownership of the already existing object to the new object without making any copy of it.
class MyClass {
public:
    int *ptr;
    MyClass(int val) { // Parameterized constructor
        ptr = new int(val);
    }
    MyClass(MyClass &&obj) { // Move constructor
        ptr = obj.ptr;
        obj.ptr = nullptr;
        cout << "Move constructor called!" <<endl;
    }
};
//DESTRUCTOR
class MyClass {
public:
    MyClass() { /* Default constructor */ }
    ~MyClass() { // Destructor
        cout << "Destructor called!" <<endl;
    }
};
//DELEGATING CONSTRUCTOR:- a target constructor of another delegating constructor, thus forming a delegating chain
class MyClass {
public:
    int x, y;
    MyClass() : MyClass(0, 0) { // Delegating constructor
        cout << "Default delegating constructor called!" << endl;
    }
    MyClass(int a, int b) : x(a), y(b) { // Parameterized constructor
        cout << "Parameterized constructor called!" <<endl;
    }
};
//EXPLICIT CONSTRUCTOR:- a constructor that is marked to prevent implicit type conversions.
class MyClass {
public:
    int x;
    explicit MyClass(int val) { 
        x = val;
    }
};
//CONVERSION CONSTRUCTOR:- a single-parameter constructor that is declared without the function specifier explicit .
class MyClass {
public:
    int x;
    MyClass(int val) { // Conversion constructor
        x = val;
    }
};



