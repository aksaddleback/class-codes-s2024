#include<iostream> 
using namespace std; 
int main() { 
    double x; 
    cout << "Enter a number: ";
    cin >> x; 
    double y = x * x; 
    cout << "Double of " << x << " is: " << y << endl; 
    cout << "Double of " << x << " is: " << x * x << endl; 
}