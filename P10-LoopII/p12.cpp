#include<iostream>
using namespace std; 

int main() { 
    string w1, w2; 
    cout << "Enter 2 words: ";
    cin >> w1 >> w2; 
    int commonCount = 0; 
    for(int i = 0; i < w1.length(); i++) { 
        for(int j = 0; j < w2.length(); j++) { 
            if (w1[i] == w2[j]) { 
                commonCount++;
                w2[j] = '*';  // we assume * cannot be one of the original characters in the word
                break; 
            }
        }
    }
    if (commonCount == w1.length() and w1.length() == w2.length()) { 
        cout << "Anagrams!\n";
    } else { 
        cout << "Not Anagrams!\n";
    }
    cout << commonCount << endl; 
}