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

void reverseArray(int arr[20]) { 
    int i = 0; 
    int j = 19; 
    while (i < j) { 
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp; 
        i++; 
        j--;
    }
}

int main() { 
    int a[20]; 
    getArray(a, "input_max_min.txt");
    printArray(a); 
    reverseArray(a);
    printArray(a);
}