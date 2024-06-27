#include <iostream>
using namespace std;

int main() { 
    string sentence; 
    cout << "Enter a sentence: "; 
    getline(cin, sentence);
    int i = 0; 
    while (i < sentence.length()) {
        char ch = sentence[i-1]; 
        //basic problem solution: 
        //if (i == 0 or sentence[i-1] == ' ') { // if we are at the beginning of a word
        //challenge problem solution
        if (i == 0 or not((ch >= 'a' and ch <= 'z') or (ch >= 'A' and ch <= 'Z'))) { // if we are at the beginning of a word
            if (sentence[i]>= 'a' and sentence[i] <= 'z') { 
                sentence[i] -= 32; 
            }
        }
        i++; 
    }
    cout << sentence << endl; 
}
