#include<iostream>
using namespace std; 

int main() { 
    int x = 0; 
    int y = 1; 
    int nextInSeq = 0; 
    int threshold; 
    cout << "Up to what num you would like me to print the fib sequence? ";
    cin >> threshold; 
    while (true) {
        if (x == 0) { 
            cout << x << endl << y << endl; 
        }
        nextInSeq = x + y; 
        if (nextInSeq > threshold) { 
            break; 
        }
        x = y; 
        y = nextInSeq;
        cout << nextInSeq << endl; 
    }
}