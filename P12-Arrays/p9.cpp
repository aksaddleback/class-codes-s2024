#include<iostream> 
using namespace std; 

void getArray(int a[10]) { 
    for(int i = 0; i < 10; i++) { 
        cin >> a[i];
    }
}

void printArray(int a[10]) { 
    for(int i = 0; i < 10; i++) { 
        cout << a[i] << " ";
    }
    cout << endl; 
}

void doubleElements(int a[10]) { 
    for(int i = 0; i < 10; i++) { 
        a[i] *= 2; 
    }
}

int main() { 
    int arr[10];
    getArray(arr);
    printArray(arr); 
    doubleElements(arr); 
    printArray(arr);
}