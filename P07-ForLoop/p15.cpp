#include <iostream>
using namespace std;

int main() { 
    int max;
    for(int i = 0; i < 5; i++) { 
        int num; 
        cout << "Enter the next number: "; 
        cin >> num; 
        if (i == 0) { 
            max = num; 
        } else if (num > max) { 
            max = num; 
        }
    }
    cout << max << endl; 
}