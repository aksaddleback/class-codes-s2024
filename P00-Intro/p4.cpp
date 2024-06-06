#include<iostream> 
using namespace std; 

int main() { 
    int x, y, z, w; 
    cout << "Enter a number: (x) "; 
    cin >> x;
    cout << "Enter a second number: (y) "; 
    cin >> y;
    cout << "Enter a 3rd number: (z) "; 
    cin >> z;
    w = (x + y) * z;
    cout << "(x + y) * z is equal to: " << w << "\n"; 
}