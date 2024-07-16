#include<iostream> 
using namespace std; 

void getArray(int a[4][4]) { 
    cout << "Enter members of the 4x4 matrix: ";
    for(int row = 0; row < 4; row++) { 
        for(int i = 0; i < 4; i++) { 
            cin >> a[row][i]; 
        }
    }
}

void printArray(int a[4][4]) { 
    cout << "The matrix: \n";
    for(int row = 0; row < 4; row++) { 
        for(int i = 0; i < 4; i++) { 
            cout << a[row][i] << " ";
        }
        cout << endl; 
    }
}

void printMainDiagonal(int a[4][4]) { 
    cout << "Main Diagonal: \n";
    for(int i = 0; i < 4; i++) { 
        cout << a[i][i] << " ";
    }
    cout << endl; 
}

int main() { 
    int matrix[4][4]; 
    getArray(matrix);
    printArray(matrix);
    printMainDiagonal(matrix);
}