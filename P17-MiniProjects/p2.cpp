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

int findMax(int a[20]) { 
    int max = a[0];
    for(int i = 1; i < 20; i++) { 
        if (a[i] > max) { 
            max = a[i];
        }
    }    
    return max;
}

int findMin(int a[20]) { 
    int min = a[0];
    for(int i = 1; i < 20; i++) { 
        if (a[i] < min) { 
            min = a[i];
        }
    }    
    return min;
}

void findMinMax(int a[20], int &min, int &max) { 
    min = a[0];
    max = a[0];
    for(int i = 1; i < 20; i++) { 
        if (a[i] < min) { 
            min = a[i];
        }
        if (a[i] > max) { 
            max = a[i];
        }
    }    
}

int main() { 
    int a[20]; 
    getArray(a, "input_max_min.txt");
    printArray(a); 
    cout << "Min is: " << findMin(a) << endl; 
    cout << "Max is: " << findMax(a) << endl; 
    int min, max; 
    findMinMax(a, min, max);
    cout << "Using a second method, min and max is: " << min << " " << max << endl; 
}