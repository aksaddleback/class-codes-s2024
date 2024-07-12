//12 2 5 9 13 3 23 99 5 9
#include<iostream> 
using namespace std;

void getNumbers(int a[10]) { 
    for(int i = 0; i < 10; i++) { 
        cin >> a[i];
    }
}

int getSumExceptMax(int a[10]) { 
    int max = a[0];
    int sum = a[0];

    for (int i = 1; i < 10; i++) { 
        sum += a[i];
        if (a[i] > max) { 
            max = a[i];
        }
    }
    return sum - max; 
}

int main() { 
    int arr[10];
    getNumbers(arr);
    int sum = getSumExceptMax(arr);
    cout << sum << endl;
}

