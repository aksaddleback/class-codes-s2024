#include <iostream>
using namespace std;

int main() { 
    string str; 
    cout << "Enter a string: ";
    getline(cin, str);
    string nextWord = "";
    string revStr = "";
    //assumption: words are separated by single space characters. no special chars or extra space chars
    for(int i = 0; i < str.length(); i++) { 
        if (str[i] != ' ') { 
            nextWord += str[i];
        } else { 
            //cout << nextWord << endl; 
            revStr = nextWord + " " + revStr;
            //revStr = revStr + " " + nextWord;
            nextWord = "";
        }
    }
    //cout << nextWord << endl; 
    revStr = nextWord + " " + revStr; 
    cout << revStr << endl; 
}