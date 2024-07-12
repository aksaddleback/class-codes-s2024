#include<iostream> 
using namespace std;

void getNumbers(int a[10]) { 
    for(int i = 0; i < 10; i++) { 
        cin >> a[i];
    }
}

void printNumbers(int a[10]) { 
    for(int i = 0; i < 10; i++) { 
        cout << a[i] << " ";
    }
    cout << endl; 
}

void pairSort(int a[10]) { 
    for(int i = 0; i < 10; i+=2) { 
        if (a[i] > a[i+1]) { 
            int temp = a[i];
            a[i] = a[i+1];
            a[i+1] = temp; 
        }
    }
}

int main() { 
    int arr[10];
    getNumbers(arr);
    pairSort(arr);
    printNumbers(arr);
}