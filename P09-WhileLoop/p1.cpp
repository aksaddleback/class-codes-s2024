#include <iostream>
using namespace std;

int main() { 
    string sentence; 
    cout << "Enter a sentence: "; 
    getline(cin, sentence);
    int i = 0; 
    int vowelCount = 0; 
    while (i < sentence.length()) {
        char ch = sentence[i];
        //if we would like to have the program work for both uppercase and lowercase we need the following line
        ch = (ch >= 'A' and ch <= 'Z') ? ch + 32 : ch; // converting to lowercase if it is uppercase
        if (ch == 'a' or ch == 'e' or ch == 'i' or ch == 'u' or ch == 'o') { 
            vowelCount++;
        }
        i++;
    }
    cout << "Number of vowels in the sentence: " << vowelCount << endl; 
}