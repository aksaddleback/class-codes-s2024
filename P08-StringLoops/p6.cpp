#include <iostream>
using namespace std;

int main() { 
    string str; 
    cout << "Enter a string containing multiple names: ";
    getline(cin, str);
    string smallestNameSoFar = "";
    string currentName = "";
    // assumption is that there are only space characters separating the names and there are not extra space characters or any other special character in the list
    for(int i = 0; i < str.length(); i++) { 
        if (str[i - 1] == ' ' || i == 0) { // we are at the beginning of a name
            if (smallestNameSoFar == "" or currentName[0] < smallestNameSoFar[0]) { 
                smallestNameSoFar = currentName;
            }
            currentName = str[i];
        } else { 
            currentName += str[i];
        }
    }
    cout << smallestNameSoFar << endl;
}