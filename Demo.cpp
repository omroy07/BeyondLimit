#include <iostream>
#include <typeinfo> 
using namespace std;
int main(){
    //Variable Declaration
    int a = 5; //Integer Type variable declaration
    char b = 's';//Character Type variable declaration
    float c = 5.5f;//Float Type variable Declaration
    double e = 4.789096;//Double Type variable Declaration
    bool f = true;
    //Take input of the variable
    int d;
    cout<<"Enter  the int of d"<<endl;
    cin>>d;
    //Check type of Variable
    cout<<"Type of a: "<<typeid(a).name()<<endl;
    cout<<"Type of b: "<<typeid(b).name()<<endl;
    cout<<"Type of c: "<<typeid(c).name()<<endl;
    cout<<"Type of d: "<<typeid(d).name()<<endl;
    cout<<"Type of e: "<<typeid(e).name()<<endl;
    cout<<"Type of f: "<<typeid(f).name()<<endl;
    return 0;
}