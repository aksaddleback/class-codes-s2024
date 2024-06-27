#include <iostream>
using namespace std;

int main() { 
    string sentence; 
    cout << "Enter a sentence: "; 
    getline(cin, sentence);
    char ch; 
    cout << "Enter a char: "; 
    cin >> ch;
    if (ch >= 'a' and ch <= 'z') { 
        ch -= 32; 
    }
    int i = 0; 
    int count = 0; 
    while (i < sentence.length()) {
        char ch1 = sentence[i]; 
        if (ch1 >= 'a' and ch1 <= 'z') { 
            ch1 -= 32; 
        }
        if (ch == ch1) { 
            count++; 
        }
        i++; 
    }
    cout << count << endl; 
}