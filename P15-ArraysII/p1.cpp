#include<iostream> 
using namespace std; 

void getArray(int a[5]) { 
    cout << "Enter 5 numbers: "; 
    for(int i = 0; i < 5; i++) { 
        cin >> a[i];
    }
}

int calcSum(int arr[5]) { 
    int sum = 0; 
    for(int i = 0; i < 5; i++) { 
        sum += arr[i];
    }
    return sum; 
}

double calcAvg(int arr[5], int sum) { 
    //int sum = calcSum(arr); 
    return sum / 5.0; 
}

int main() { 
    int arr[5]; 
    getArray(arr);
    int sum = calcSum(arr);
    cout << sum << endl; 
    cout << calcAvg(arr, sum) << endl; 
}