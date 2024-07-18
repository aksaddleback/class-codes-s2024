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

void printArray(int arr[], int size) { 
    cout << "The array:\n";
    for(int i = 0; i < size; i++) { 
        cout << arr[i] << ", ";
    }
    cout << endl; 
}

void printUnique(int arr[20]) { 
    cout << "Unique Elements:\n";
    for(int i = 0; i < 20; i++) { 
        bool unique = true; 
        for(int j = 0; j < 20; j++) { 
            if (i != j and arr[i] == arr[j]) {
                unique = false; 
             }
        }
        if (unique) { 
            cout << arr[i] << " ";
        }
    }
    cout << endl; 
}


int main() { 
    int a[20];
    getArray(a, "input_unique.txt");
    printArray(a, 20); 
    printUnique(a);
}