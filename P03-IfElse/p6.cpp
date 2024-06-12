#include <iostream>
using namespace std;
int main()
{
    char ch; 
    cout << "Enter a char: ";
    cin >> ch; 
    if (ch == 'a' or ch == 'i' or ch == 'e' 
        or ch == 'o' or ch == 'u') { 
        cout << "The char is a vowel!\n"; 
    } else { 
        cout << "The char is a consonant!\n";
    }
}