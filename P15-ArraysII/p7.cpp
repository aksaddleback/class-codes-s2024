#include<iostream> 
using namespace std; 

void getArray2x3(int a[2][3]) { 
    cout << "Enter members of the 2x3 matrix: ";
    for(int row = 0; row < 2; row++) { 
        for(int i = 0; i < 3; i++) { 
            cin >> a[row][i]; 
        }
    }
}

void getArray3x4(int a[3][4]) { 
    cout << "Enter members of the 3x4 matrix: ";
    for(int row = 0; row < 3; row++) { 
        for(int i = 0; i < 4; i++) { 
            cin >> a[row][i]; 
        }
    }
}

void printArray2x3(int a[2][3], string message) { 
    cout << message << "\n";
    for(int row = 0; row < 2; row++) { 
        for(int i = 0; i < 3; i++) { 
            cout << a[row][i] << " ";
        }
        cout << endl; 
    }
}

void printArray3x4(int a[3][4], string message) { 
    cout << message << "\n";
    for(int row = 0; row < 3; row++) { 
        for(int i = 0; i < 4; i++) { 
            cout << a[row][i] << " ";
        }
        cout << endl; 
    }
}

void printArray2x4(int a[2][4], string message) { 
    cout << message << "\n";
    for(int row = 0; row < 2; row++) { 
        for(int i = 0; i < 4; i++) { 
            cout << a[row][i] << " ";
        }
        cout << endl; 
    }
}

int dotProduct(int row[3], int col[3]) {
    int res = 0; 
    for(int i = 0; i < 3; i++) { 
        res += row[i] * col[i];
    }
    return res; 
}

void multiply(int a[2][3], int b[3][4], int res[2][4]) { 
    for(int i = 0; i < 2; i++) { 
        for (int j = 0; j < 4; j++) { 
            int col[3];
            for(int k = 0; k < 3; k++) { 
                col[k] = b[k][j];
            }
            res[i][j] = dotProduct(a[i], col);
        }
    }
}


int main() { 
    int a[2][3], b[3][4], mul[2][4];
    getArray2x3(a);
    printArray2x3(a, "Matrix A is: ");
    getArray3x4(b);
    printArray3x4(b, "Matrix B is: ");
    multiply(a, b, mul);
    printArray2x4(mul, "Multiplication Result: ");
}