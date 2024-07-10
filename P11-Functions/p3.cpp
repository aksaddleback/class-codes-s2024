#include <iostream> 
using namespace std; 

double calcSum(double x, double y) { 
    return x + y; 
}

int main() { 
    for(int i = 0; i < 3; i++) { 
        double a, b; 
        cout << "Enter two numbers: ";
        cin >> a >> b; 
        cout << "Sum: " << calcSum(a, b) << endl; 
    }
}