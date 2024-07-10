#include <iostream> 
using namespace std; 

bool isPalindrome(string str) { 
    int i = 0, j = str.length() - 1; 
    while (i < j) { 
        if (str[i] != str[j]) { 
            return false;
        }
        i++; 
        j--;
    }
    return true; 
}

int main() { 
    for(int i = 0; i < 3; i++) {
        string s; 
        cout << "Enter a string: ";
        getline(cin, s); 
        cout << "Palidrome? " << (isPalindrome(s) ? "Yes" : "No") << endl; 
    }
}