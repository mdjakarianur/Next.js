#include <iostream>
#include <string>
using namespace std;

int main() {

    string str1 = "Hello world";
    string str2 = "Hello world";
    string str3 = "Hello";
    string str4 = "Hello world, What's Up?";
    
    cout << "String 1: " << str1 << endl;
    cout << "String 2: " << str2 << endl;
    cout << "String 3: " << str3 << endl;
    cout << "String 4: " << str4 << endl;
    
    // compare the strings
    cout <<"Comparing String 1 and String 2: "  << str1.compare(str2) << " (Equal)" <<endl;
    cout <<"Comparing String 1 and String 3: " << str1.compare(str3) << " (String 1 is Longer)" << endl;
    cout <<"Comparing String 1 and String 4: " << str1.compare(str4) <<" (String 1 is Smaller)" << endl;

    return 0;
}
