#include <iostream>
using namespace std;

int main()
{
    string str;
    cin >> str;
    cout << str[0] << endl;
    cout << str[1] << endl;
    cout << str[str.length() - 1] << endl;
    char ch = str[str.length() - 1];
    cout << str[0] + str[1] + ch << endl; // ascii code for 'a' is 97
    // in the above code the code for the 3 characters are added up to 319 and the last line will print a number
    // instead of a string since this version of c++ compiler would add ascii code of the characters
    // instead of concatenating the 3 characters. 
}