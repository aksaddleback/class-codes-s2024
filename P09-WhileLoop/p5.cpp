#include <iostream>
using namespace std;
int main() {
    string str1, str2;
    string smaller = "";
    cout << "Enter two words: ";
    cin >> str1 >> str2; 
    int i = 0;
    while (i < str1.length() and i < str2.length()) {
        if (str1[i] < str2[i]) {
            smaller = str1; 
            break;
        } else if (str2[i] < str1[i]) {
            smaller = str2; 
            break;
        }
        i++;
    }
    if (smaller == "") { 
        if (str1.length() < str2.length()) { 
            smaller = str1; 
        } else if (str2.length() < str1.length()) { 
            smaller = str2; 
        }
    }

    if (smaller == "") { 
        cout << "Names are the same!" << endl; 
    } else {
        cout << "Smaller Name: " << smaller << endl; 
    }
}