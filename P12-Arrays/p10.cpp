//12 2 5 2 3 3 2 9 3 12

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

int findNumberAppCount(int a[10], int x) { 
    int count = 0; 
    for(int i = 0; i < 10; i++) { 
        if (a[i] == x) { 
            count++;
        }
    }
    return count; 
}


int main() { 
    int arr[10];
    getArray(arr);
    printArray(arr);
    int numToFind; 
    do { 
        cout << "Enter a number to find: ";
        cin >> numToFind;
        int count = findNumberAppCount(arr, numToFind);
        if (count > 0) { 
            cout << "Found " << count << " times.\n";
        } else { 
            cout << "Not found!\n";
        }
    } while (numToFind != 0);
}
