#include <iostream>
using namespace std;

int main() { 
    string str; 
    getline(cin, str);
    int wordCount = 0; // to account for the last word
    //if (str.length() == 0){ }
    bool newWordStarted = false; 
    for(int i = 0; i < str.length(); i++) { 
        if (((str[i] >= 'a' and str[i] <= 'z') or (str[i] >= 'A' and str[i] <= 'Z'))
                and (str[i - 1] == ' ' or i == 0)) { 
                newWordStarted = true; 
        }
        if (str[i] == ' ' && newWordStarted == true) { 
            wordCount++;
            newWordStarted = false; 
        }
    }
    if (newWordStarted) { // for the last word if there is not space after it
        wordCount++;
    }
    cout << wordCount << endl; 
}