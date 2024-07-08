#include<iostream>
using namespace std; 

int main() { 
    string s = "zabracecarbax";
    for(int i = 0; i < s.length() - 1; i++) {  
        for(int j = i + 1; j < s.length(); j++) { 
            string substr = "";
            int st = i;
            int en = j; 
            bool pal = true; 
            while (st <= j) { 
                if (s[st] != s[en]) { 
                    pal = false; 
                    break; 
                }
                substr += s[st++];
            }
            if (pal) { 
                cout << substr << endl; 
            }
        }
    }
}