#include<iostream>
using namespace std; 

int main() { 
    string str; 
    cin >> str;
    // solution 1 
    int k = 0; 
    for(int i = 0; i < 4; i++) { 
        for (int j = 0; j < 4; j++) { 
            cout << str[k++] << " ";
        }
        cout << endl; 
    }

    cout << endl; 
    // solution 2
    for(int i = 0; i < 4; i++) { 
        for (int j = 0; j < 4; j++) { 
            cout << str[i * 4 + j] << " ";
        }
        cout << endl; 
    }
}