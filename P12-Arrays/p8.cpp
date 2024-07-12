//12 2 5 9 13 3 23 9 0 7

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

bool findNumber(int a[10], int x) { 
    for(int i = 0; i < 10; i++) { 
        if (a[i] == x) { 
            return true; 
        }
    }
    return false; 
}

int findNumberPos(int a[10], int x) { 
    for(int i = 0; i < 10; i++) { 
        if (a[i] == x) { 
            return i + 1; 
        }
    }
    return -1; 
}


int main() { 
    int arr[10];
    getArray(arr);
    printArray(arr);
    int numToFind; 
    do { 
        cout << "Enter a number to find: ";
        cin >> numToFind;
        int pos = findNumberPos(arr, numToFind);
        if (pos > 0) { 
            cout << "Found at pos " << pos << "\n";
        } else { 
            cout << "Not found!\n";
        }
    } while (numToFind != 0);
}
