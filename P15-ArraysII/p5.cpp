#include<iostream> 
using namespace std; 

void getArray(int a[3][4]) { 
    cout << "Enter members of the 3x4 matrix: ";
    for(int row = 0; row < 3; row++) { 
        for(int i = 0; i < 4; i++) { 
            cin >> a[row][i]; 
        }
    }
}

void printArray(int a[3][4]) { 
    cout << "The matrix: \n";
    for(int row = 0; row < 3; row++) { 
        for(int i = 0; i < 4; i++) { 
            cout << a[row][i] << " ";
        }
        cout << endl; 
    }
}

void calculateSum(int a[3][4], int s[3]) { 
    for(int i = 0; i < 3; i++) { 
        s[i] = 0; 
        for(int j = 0; j < 4; j++) { 
            s[i] += a[i][j];
        }
    }
}

int getRowWithHighestSum(int s[3]) {
    int highestSum = s[0];
    int rowNum = 0; 
    for(int i = 1; i < 3; i++) { 
        if (s[i] > highestSum) { 
            highestSum = s[i]; 
            rowNum = i; 
        }
    }
    return rowNum; 
}

void printRow(int a[3][4], int r) { 
    cout << "Row with highest sum: \n";
    for(int c = 0; c < 4; c++) { 
        cout << a[r][c] << " ";
    }
    cout << endl; 
}

int main() { 
    int matrix[3][4];
    int sums[3];
    getArray(matrix);
    printArray(matrix);
    calculateSum(matrix, sums);
    int rowNum = getRowWithHighestSum(sums);
    printRow(matrix, rowNum);
}