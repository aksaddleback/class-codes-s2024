#include<iostream>
using namespace std; 

int main() { 
    string str, outStr = "";
    cout << "Enter a sentence: ";
    getline(cin, str); 
    int i = 0; 
    while(i < str.length()) { 
        if (str[i] != ' ') { 
            outStr += str[i];
        }
        i++; 
    }
    cout << outStr << endl; 
}