#include<iostream>
using namespace std; 

int main() { 
    int numOfRows, numOfCols; 
    cout << "Enter two numbers: ";
    cin >> numOfRows >> numOfCols; 
    // solution 1
    for(int row = 0; row < numOfRows; row++) {
        char ch = (row % 2 == 0) ? 'X' : 'O';
        for(int col = 0; col < numOfCols; col++) { 
            cout << ch; 
            ch = (ch == 'X') ? 'O' : 'X';
        }
        cout << endl; 
    }

    // Solution 2
    cout << endl; 
    for(int row = 0; row < numOfRows; row++) {
        for(int col = 0; col < numOfCols; col++) { 
            char ch = ((row + col) % 2 == 0) ? 'X' : 'O';
            cout << ch; 
        }
        cout << endl; 
    }
}