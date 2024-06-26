#include <iostream>
using namespace std;

int main() { 
    string str; 
    cout << "Enter a string: ";
    getline(cin, str);
    string revWord = "";
    string resString = "";
    for(int i = 0; i < str.length(); i++) { 
        if (str[i] != ' ') { 
            revWord = str[i] + revWord;
        } else { 
            //cout << revWord << endl;
            resString = resString + " " + revWord;
            revWord = "";
        }
    }
    resString = resString + " " + revWord;
    cout << resString << endl; 
}