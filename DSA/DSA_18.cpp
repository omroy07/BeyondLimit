#include <iostream>
#include <string>
#include <algorithm> // For reverse function
using namespace std;
int main() {
    // Declaring and initializing strings
    string str1 = "Hello";
    string str2 = "BeyondLimit!";
    // Concatenation
    string fullStr = str1 + " " + str2;
    cout << "Concatenated String: " << fullStr << endl;
    // Length of the string
    cout << "Length of String: " << fullStr.length() << endl;
    // Accessing characters
    cout << "First character: " << fullStr[0] << endl;
    // Substring
    string subStr = fullStr.substr(0, 5);
    cout << "Substring: " << subStr << endl;
    // Finding a character or substring
    size_t pos = fullStr.find("Hello");
    //(pos != string::npos) checks if the substring 
    //was found; npos means "not found" (-1), so the 
    //condition is true when the substring exists in the 
    //string.
    if (pos != string::npos){
        cout << "'Hello' found at position: " << pos << endl;
    }
    else{
        cout << "'Hello' not found" << endl;
    }
    // Replacing a substring
    fullStr.replace(6, 5, "Universe");
    cout << "After Replacement: " << fullStr << endl;
    // Reversing the string
    reverse(fullStr.begin(), fullStr.end());
    cout << "Reversed String: " << fullStr << endl;
    return 0;
}
