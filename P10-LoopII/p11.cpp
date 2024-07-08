#include<iostream>
using namespace std; 

int main() { 
    string str;// = "1239476";
    cout << "Enter a string including all digits: ";
    cin >> str; 
    string outputStr = "";
    for(int i = 0; i < str.length(); i++) { 
        bool qualified = true; 
        for(int j = i+1; j < str.length(); j++) { 
            if (str[i] > str[j]) { 
                qualified = false; 
                break; 
            }
        }
        if (qualified) { 
            outputStr += str[i];
        }
    }
    cout << outputStr << endl; 
}