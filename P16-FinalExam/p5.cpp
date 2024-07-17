#include<iostream> 
#include<fstream> 
using namespace std; 

int coutnChar(string s, char ch) { 
    int c = 0; 
    for(int i = 0; i < s.length(); i++) { 
        if (s[i] == ch) { 
            c++; 
        }
    }
    return c; 
}

void findMostOccuredChar(string s) { 
    int max = 0; 
    char maxChar;
    for(int i = 0; i < s.length(); i++) { 
        if (s[i] == ' ') { 
            continue;
        }
        int count = coutnChar(s, s[i]);
        if (count > max) { 
            max = count;
            maxChar = s[i];
        }
    }
    cout << maxChar << " appears the most (" << max << " times) in the string!\n"; 
}

int main() { 
    string s; 
    cout << "Enter a string: "; 
    getline(cin, s);
    findMostOccuredChar(s);
}