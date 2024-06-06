#include<iostream> 
using namespace std; 

int main() { 
    int x, y, z; // we can define multiple variables in the same declaration statement
    cout << "Enter a number: "; 
    cin >> x;
    cout << "Enter a second number: "; 
    cin >> y;
    z = x + y;  // assign to z. what to assing? x + y; 
    cout << "Sum of the two value is: " << z << "\n"; 
}