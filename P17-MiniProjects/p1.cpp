#include<iostream> 
using namespace std; 

void getArray(int arr[10]) { 
    cout << "Enter 10 elements for the array: ";
    for(int i = 0; i < 10; i++) { 
        cin >> arr[i];
    }
}

void printArray(int arr[10]) { 
    cout << "The array:\n";
    for(int i = 0; i < 10; i++) { 
        cout << arr[i] << ", ";
    }
    cout << endl; 
}

int selectMinLoc(int arr[10], int fromIndex) { 
    int minLoc = fromIndex; 
    for(int i = fromIndex + 1; i < 10; i++) { 
        if (arr[i] < arr[minLoc]) { 
            minLoc = i; 
        }
    }
    return minLoc;
}

void swap(int arr[10], int loc1, int loc2) {
    int temp = arr[loc1]; 
    arr[loc1] = arr[loc2];
    arr[loc2] = temp; 
}

void sortArray(int arr[10]) { 
    for(int i = 0; i < 10; i++) { 
        int minIndex = selectMinLoc(arr, i);
        swap(arr, minIndex, i);
    }
}

int main() { 
    int a[10];
    getArray(a);
    printArray(a);
    sortArray(a);
    printArray(a);
}