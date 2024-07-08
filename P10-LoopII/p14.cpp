#include<iostream>
using namespace std; 

int main() { 
    string s = "racecars are fast!";
    string w;
    cout << "Enter a word: ";
    cin >> w; 
    bool found = false;
    for(int i = 0; i <= s.length() - w.length(); i++) { 
        int j = 0; 
        while(s[i +j] == w[j] && j < w.length()) { 
            j++; 
        }
        if (j == w.length()) { 
            found = true; 
            break; 
        }
    }
    cout << found << endl; 
}