#include<iostream> 
using namespace std;

void getNumbers(int a[10]) { 
    for(int i = 0; i < 10; i++) { 
        cin >> a[i];
    }
}

int findSecondMax(int arr[10]) { 
    int max, secondMax; 
    if (arr[0] > arr[1]) { 
        max = arr[0];
        secondMax = arr[1];
    } else { 
        secondMax = arr[0];
        max = arr[1];
    }
    for(int i = 2; i < 10; i++) { 
        if (arr[i] > max) { 
            secondMax = max; 
            max = arr[i];
        } else if (arr[i] > secondMax) { 
            secondMax = arr[i]; 
        }
    }
    return secondMax; 
}

int main() { 
    int arr[10];
    getNumbers(arr);
    int secondMax = findSecondMax(arr);
    cout << "Second Largest Num Is: " << secondMax << endl; 
}