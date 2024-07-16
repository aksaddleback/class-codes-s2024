#include<iostream> 
using namespace std; 

void getArray(int a[2][3]) { 
    cout << "Enter members of the 2x3 matrix: ";
    for(int row = 0; row < 2; row++) { 
        for(int i = 0; i < 3; i++) { 
            cin >> a[row][i]; 
        }
    }
}

void printArray(int a[2][3], string message) { 
    cout << message << "\n";
    for(int row = 0; row < 2; row++) { 
        for(int i = 0; i < 3; i++) { 
            cout << a[row][i] << " ";
        }
        cout << endl; 
    }
}

void calculateSum(int a[2][3], int b[2][3], int res[2][3]) { 
    for(int r = 0; r < 2; r++) { 
        for(int c = 0; c < 3; c++) { 
            res[r][c] = a[r][c] + b[r][c];
        }
    }
}


int main() { 
    int a[2][3], b[2][3], sum[2][3];
    getArray(a);
    printArray(a, "Matrix A is: ");
    getArray(b);
    printArray(b, "Matrix B is: ");
    calculateSum(a, b, sum);
    printArray(sum, "Sum of the two matrices is: ");
}