#include<iostream>
using namespace std; 

int main() { 
    int rows; 
    cin >> rows; 
    for(int r = 1; r <= rows; r++) { 
        for(int c = 1; c <= r; c++) { 
            cout << c; 
        }
        cout << endl; 
    }
}