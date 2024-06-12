#include<iostream> 
using namespace std; 
int main() { 
    int x, y; 
    cout << "Enter two numbers: "; 
    cin >> x >> y; 
    if (x > y) { 
        cout << x << " is the larger number!"; 
    } 
    if (y > x) { 
        cout << y << " is the larger number!"; 
    }
    if (x == y) { 
        cout << "Numbers are equal";
    }
    cout << endl; 
}