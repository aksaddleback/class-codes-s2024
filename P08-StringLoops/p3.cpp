#include <iostream>
using namespace std;

int main() { 
    string str;
    // solution 1
    getline(cin, str);
    for(int i = str.length() - 1; i >= 0; i--) { 
        cout << str[i];
    }
    cout << endl;

    // solution 2
    string revStr = "";
    string revStr2 = "";
    for(int i = str.length() - 1; i >= 0; i--) { 
        revStr = revStr + str[i];
        // let's say str = "hello", revStr = "", then revStr = "olle" ..
        revStr2 = str[i] + revStr2;
        // let's say str = "hello", revStr2 = "", then revStr2 = "o", "lo", "llo", "ello", "hello"
    }
    cout << revStr << endl << revStr2 << endl;

    // solution 3
    string revStr3 = "";
    string revStr4 = "";
    for(int i = 0; i < str.length(); i++) { 
        revStr3 = revStr3 + str[i];
        // let's say str = "hello", revStr3 = "", then revStr3 = "h", "he", "hel"  ..
        revStr4 = str[i] + revStr4;
        // let's say str = "hello", revStr4 = "", then revStr4 = "h", "eh", "leh", "lleh", "olleh"
    }
    cout << revStr3 << endl << revStr4 << endl;
}