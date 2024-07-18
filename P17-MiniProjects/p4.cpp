#include<iostream> 
#include<fstream> 
using namespace std; 

void getArray(int arr[20], string fileName) { 
    ifstream f(fileName);
    for(int i = 0; i < 20; i++) { 
        f >> arr[i];
    }
    f.close();
}

void printArray(int arr[20]) { 
    cout << "The array:\n";
    for(int i = 0; i < 20; i++) { 
        cout << arr[i] << ", ";
    }
    cout << endl; 
}

bool search(int a[20], int x) { 
    for(int i = 0; i < 20; i++) { 
        if (a[i] == x) { 
            return true; 
        }
    }
    return false; 
}

int main() { 
    int a[20]; 
    getArray(a, "input_max_min.txt");
    printArray(a); 
    int numToFind; 
    do { 
        cout << "Enter a number to find in the array: "; 
        cin >> numToFind; 
        if (search(a, numToFind)) { 
            cout << "Found!\n";
        } else { 
            cout << "Not found!\n";
        }
    } while(numToFind != -1);
}