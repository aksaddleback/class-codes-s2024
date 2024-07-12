#include<iostream> 
using namespace std; 

void getArray(int a[6]) { 
    for(int i = 0; i < 6; i++) { 
        cin >> a[i];
    }
}

void printArray(int a[6]) { 
    for(int i = 0; i < 6; i++) { 
        cout << a[i] << " ";
    }
    cout << endl; 
}

void reverseArray(int a[6]) { 
    int start = 0, end = 5;     
    while (start < end) { 
        int temp = a[start];
        a[start] = a[end];
        a[end] = temp; 
        start++;
        end--;
    }
}

int main() { 
    int arr[6];
    getArray(arr);
    reverseArray(arr);
    printArray(arr); 
}