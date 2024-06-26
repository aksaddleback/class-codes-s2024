#include <iostream>
using namespace std;

int main() { 
    string str; 
    cout << "Enter a string: ";
    getline(cin, str);
    //solution 1
    string rev = "";
    for(int i = 0; i < str.length(); i++) { 
        rev = str[i] + rev;
    }
    if (str == rev) { 
        cout << "Palindrome!\n";
    } else { 
        cout << "Not Palindrome!\n";
    }

    //solution 2. w/o using a second string variable
    bool isPalindrome = true; 
    for(int i = 0, j = str.length() -1; i < j; i++, j--) { 
        if (str[i] != str[j]) { 
            isPalindrome = false;
            break; 
        }
    }
    if (isPalindrome) { // means if isPalindrome == true
        cout << "S2: Palindrome!\n";
    } else { 
        cout << "S2: Not Palindrome!\n";
    }
}