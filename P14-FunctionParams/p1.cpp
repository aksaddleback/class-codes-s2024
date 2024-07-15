#include<iostream> 
using namespace std; 

double calculateInterest(double principal, double interest = 0.05, int time = 1) { 
    return principal * interest * time; 
}

int main() { 
    cout << calculateInterest(1000) << endl; 
    cout << calculateInterest(1000, 0.2) << endl; 
    cout << calculateInterest(1000, 0.1, 3) << endl; 
}