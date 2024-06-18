#include <iostream>
using namespace std;

int main() { 
    // first solution, loop runs 50 times
    // every time we check if the number is even or odd
    int sum1 = 0; 
    for(int i = 1; i <= 50; i++) { 
        if (i % 2 == 0) { 
            sum1 = sum1 + i; // sum1 += i; 
        }
    }
    cout << sum1 << endl; 

    // second solution, more efficient since loop runs only 25 times and we don't check for even-ness
    int sum2 = 0; 
    for(int i = 2; i <= 50; i+=2) { 
        sum2 += i; 
    }
    cout << sum2 << endl; 
}