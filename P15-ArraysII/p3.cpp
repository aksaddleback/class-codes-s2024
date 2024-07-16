#include<iostream> 
using namespace std; 

void getArray(int a[4][5]) { 
    cout << "Enter members of the 4x5 matrix: ";
    for(int row = 0; row < 4; row++) { 
        for(int i = 0; i < 5; i++) { 
            cin >> a[row][i]; 
        }
    }
}

void printArray(int a[4][5]) { 
    cout << "The matrix: \n";
    for(int row = 0; row < 4; row++) { 
        for(int i = 0; i < 5; i++) { 
            cout << a[row][i] << " ";
        }
        cout << endl; 
    }
}

void calculateSum(int a[4][5], int s[4]) { 
    for(int i = 0; i < 4; i++) { 
        s[i] = 0; 
        for(int j = 0; j < 5; j++) { 
            s[i] += a[i][j];
        }
    }
}

void printSums(int s[4]) {
    for(int i = 0; i < 4; i++) { 
        cout << "Sum of row #" << i << " is: " << s[i] << endl; 
    }
}

int main() { 
    int matrix[4][5];
    int sums[4];
    getArray(matrix);
    printArray(matrix);
    calculateSum(matrix, sums);
    printSums(sums);
}