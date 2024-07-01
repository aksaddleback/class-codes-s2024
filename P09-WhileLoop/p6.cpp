#include <iostream>
using namespace std;
int main() {
    long int factorial = 1; 
    int num; 
    cout << "Enter a number: ";
    cin >> num; 
    while (num > 1) { 
        factorial *= num; 
        num--; 
    }
    cout << "Factorial of the number you entered is: " << factorial << endl; 
}