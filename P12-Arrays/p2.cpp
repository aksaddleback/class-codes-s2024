#include<iostream> 
using namespace std;

void getNumbers(int a[7]) { 
    for(int i = 0; i < 7; i++) { 
        cin >> a[i];
    }
}

void printSums(int a[7], int start, int end) { 
    string s = "Sum: ";
    int sum = 0; 
    for(int i = start; i < 7; i+=2) { 
        s += to_string(a[i]); 
        sum += a[i];
        if (i != end) { 
            s += " + ";
        } else { 
            s += " = ";
        }
    }
    cout << s << sum << endl; 
}

int main() { 
    int arr[7];
    getNumbers(arr);
    printSums(arr, 0, 6);
    printSums(arr, 1, 5);
}