#include<iostream> 
using namespace std; 
int main() { 
    // char ch; 
    // cout << "Enter a char: "; 
    // cin >> ch;          // the ascii code of the char is stored in memory. 
    // cout << ch << endl; // c++ compiler will read the code of the character from memory, let's say it is 65 (A). 
                        // for the above cout, the character is going to be printed out on the screen and not the code of it.
    int x; 
    char ch1; 
    cout << "Enter a number: ";
    cin >> x;   // user enters 65
    cout << "Enter a char: ";
    cin >> ch1; // user enters A (its ascii code is 65)
                // will the same value (65 be stored in both memory location of x and ch1?)
                // yes                
    cout << x << ", " << ch1 << endl; 
    int code = ch1; 
    cout << ch1 << ", " << code << endl; 
    cout << (int)ch1 << endl; 
}