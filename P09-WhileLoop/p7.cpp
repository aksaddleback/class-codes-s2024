#include<iostream>
using namespace std; 

int main() { 
    srand(time(0)); 
    int x = rand();
    cout << x << " " << x % 100 + 1 << endl;
    x = x % 100 + 1; 
    int guess = -1; 
    while (guess != x) { 
        cout << "What is your guess? "; 
        cin >> guess; 
        if (guess > x) { 
            cout << "Too high!\n";
        } else if (guess < x) { 
            cout << "Too low!\n";
        } else { 
            cout << "You got it!\n";
        }
    }
}