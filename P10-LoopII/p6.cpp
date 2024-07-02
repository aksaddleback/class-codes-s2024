#include<iostream>
using namespace std; 

int main() { 
    int numOfRows; 
    cin >> numOfRows; 
    for(int row = 1; row <= numOfRows; row++) { 
        for(int i = 1; i <= row; i++) { 
            cout << row;
        }
        cout << endl; 
    }
}