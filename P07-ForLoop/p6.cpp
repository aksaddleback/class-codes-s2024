#include <iostream>
using namespace std;

int main() { 
    // solution 1, runs ~201 times, checks two conditions in if statement
    for (int i = 0; i <= 200; i++) { 
        if (i % 7 == 0 and i > 50) { 
            cout << i << " "; 
        }
    }
    cout << endl; 
    // solution 2, runs ~150 times, checks one conditions in if statement
    for (int i = 50; i <= 200; i++) { 
        if (i % 7 == 0) { 
            cout << i << " "; 
        }
    }
    cout << endl; 
    // solution 3, runs ~20 times, no if statement 
    for (int i = 56; i <= 200; i+=7) { 
        cout << i << " "; 
    }
    cout << endl; 
}