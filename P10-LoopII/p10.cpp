#include<iostream>
using namespace std; 

int main() { 
    string str = "itisagreatday!";
    string output = "";
    for(int i = 0; i < str.length(); i++) { // go over every char in the str
        bool inOutputStr = false; 
        for(int j = 0; j < output.length(); j++) {  // go over every char in the output
            if (str[i] == output[j]) { 
                inOutputStr = true; 
                break;
            }
        }
        if (!inOutputStr) { 
            output = output + str[i];
        }
    }
    cout << output << endl;
}
