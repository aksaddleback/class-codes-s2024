#include <iostream> 
using namespace std; 

double calcArea(double length, double width) { 
    return length * width; 
}

int main() { 
    cout << calcArea(5.5, 9) << endl; 
    double a, b; 
    cout << "Enter two numbers: ";
    cin >> a >> b; 
    cout << calcArea(a, b) << endl; 
}