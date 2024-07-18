#include<iostream> 
#include<fstream> 
using namespace std; 

void getArrays(int arr1[10],int arr2[10], string fileName) { 
    ifstream f(fileName);
    for(int i = 0; i < 10; i++) { 
        f >> arr1[i];
    }
    for(int i = 0; i < 10; i++) { 
        f >> arr2[i];
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

void merge(int a[], int b[], int c[]) { 
    int i = 0, j = 0, k = 0;
    while (i < 10 and j < 10) { // until we don't get to the end of one array
        if (a[i] < b[j]) { 
            c[k++] = a[i++];
        } else { 
            c[k++] = b[j++];
        }
    }
    while(i < 10) {
        c[k++] = a[i++];
    }
    while(j < 10) {
        c[k++] = b[j++];
    }
}

int main() { 
    int a[10], b[10], c[20]; 
    getArrays(a, b, "merge.txt");
    printArray(a, 10); 
    printArray(b, 10);
    merge(a, b, c);
    printArray(c, 20);
}