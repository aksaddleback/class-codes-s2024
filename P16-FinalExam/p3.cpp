#include<iostream> 
#include<fstream> 
using namespace std; 

void readArray(int arr[10], string fn) { 
    ifstream f(fn);
    int i = 0;
    while(i < 10) { 
        f >> arr[i++];
    }
}

void printArray(int arr[10]) { 
    for(int i = 0; i < 10; i++) { 
        cout << arr[i] << " ";
    }
    cout << endl; 
}

void printNumbersLargerThanHalfInB(int a[10],int b[10]) { 
    for(int i = 0; i < 10; i++) { 
        int count = 0; 
        for(int j = 0; j < 10; j++) { 
            if (a[i] > b[j]) { 
                count++;
            }
        }
        if (count >= 5) { 
            cout << a[i] << " "; 
        }
    }
    cout << endl; 
}

int main() { 
    int a[10], b[10];
    readArray(a, "filea.txt"); 
    readArray(b, "fileb.txt");
    printArray(a);
    printArray(b);
    printNumbersLargerThanHalfInB(a, b);
}