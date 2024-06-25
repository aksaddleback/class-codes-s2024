#include <iostream>
using namespace std;

int main() { 
    string str;
    char ch; 
    cout << "Enter a string: ";
    getline(cin, str);
    cout << "Enter a char: ";
    cin >> ch; 
    int countOfChar = 0; 
    for(int i = 0; i < str.length(); i++) { 
        if (str[i] == ch) { 
            countOfChar++;
        }
    }
    cout << "Char " << ch << " appeared " << countOfChar << " times in the string!\n"; 
}