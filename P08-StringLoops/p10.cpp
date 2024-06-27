#include <iostream> 
using namespace std; 

int main() { 
    string str; 
    cout << "Enter a line of text: ";
    getline(cin, str); 
    string longestWord = "";
    string curWord = ""; 
    // Solution 1
    for(int i = 0; i < str.length(); i++) { 
        if (str[i] != ' ') {  // not end of a word
            curWord += str[i];
        } else {              // end of a word
            if (curWord.length() > longestWord.length()) { 
                longestWord = curWord; 
            }
           curWord = "";
        }
    }
    if (curWord.length() > longestWord.length()) {  // for last word that is not followed by a space character
        longestWord = curWord;
    }
    curWord = "";
    cout << "1) Longest word is " << longestWord << ", with length " << longestWord.length() << endl;

    // Solution 2
    for(int i = 0; i < str.length(); i++) { 
        if (str[i] == ' ' or i == str.length() - 1) {  // end of a word
            if (i == str.length() - 1) { 
                curWord += str[i];
            }
            if (curWord.length() > longestWord.length()) { 
                longestWord = curWord; 
            }
           curWord = "";
        } else {
            curWord += str[i];
        }
    }
    cout << "2) Longest word is " << longestWord << ", with length " << longestWord.length() << endl;
}