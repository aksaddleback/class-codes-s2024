#include <iostream>
using namespace std;

int main() { 
    // solution 1, loop runs 101 times
    int sum = 0; 
    for(int i = 0; i <= 100; i++) { 
        if (i % 3 == 0 and i % 5 == 0) { 
            sum += i; 
        }
    }
    cout << sum << endl; 

    // solution 2, loop runs 30 times
    sum = 0; 
    for(int i = 3; i <= 100; i+=3) { 
        if (i % 5 == 0) { 
            sum += i; 
        }
    }
    cout << sum << endl; 

    // solution 3, loop runs 20 times
    sum = 0; 
    for(int i = 5; i <= 100; i+=5) { 
        if (i % 3 == 0) { 
            sum += i; 
        }
    }
    cout << sum << endl; 

    // solution 4, loop runs 7 times
    sum = 0; 
    // every number divisible by 15 is both divisible by 5 and 3
    for(int i = 15; i <= 100; i+=15) { 
        sum += i; 
    }
    cout << sum << endl; 
}