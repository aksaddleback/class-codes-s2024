#include <iostream> 
using namespace std; 

int main() { 
    string str; 
    cout << "Enter a line of text: ";
    getline(cin, str); 
    string longestWord = "";
    string curWord = ""; 
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
    cout << "Longest word is " << longestWord << ", with length " << longestWord.length() << endl;
}