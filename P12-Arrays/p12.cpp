// 12 2 5 9 13 3 23 9 0 55

#include<iostream> 
using namespace std; 

void getArray(int a[], int size) { 
    for(int i = 0; i < size; i++) { 
        cin >> a[i];
    }
}

void printArray(int a[], int size) { 
    for(int i = 0; i < size; i++) { 
        cout << a[i] << " ";
    }
    cout << endl; 
}

void copyArray(int a[10], int b[5], int startPos, int count) { 
    for(int i = 0; i < count; i++) { 
        b[i] = a[i + startPos]; 
    }
}

int main() { 
    int a[10], b[5];
    getArray(a, 10); 
    printArray(a, 10); 
    copyArray(a, b, 2, 5);
    printArray(b, 5); 
}