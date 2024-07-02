#include<iostream>
using namespace std; 

int main() { 
    int n; 
    cout << "Enter a number: ";
    cin >> n; 
    for (int j = 0; j < n; j++) {     // repeating n times
        for (int i = 0; i < n; i++) { // printing one line
            cout << "* "; 
        }
        cout << endl; 
    }
}