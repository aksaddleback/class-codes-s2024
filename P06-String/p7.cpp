#include <iostream>
using namespace std;

int main() { 
    string fullName1; 
    string fullName2;
    cout << "Enter your full name (frist & last) again: "; 
    getline(cin, fullName1);
    cout << "Enter your full name (frist & last): "; 
    cin >> fullName2; 
    cout << "full name 1: " << fullName1 << endl; 
    cout << "full name 2: " << fullName2 << endl; 
}
    