#include <iostream>
using namespace std;

int main() { 
    int num; 
    cin >> num; 
    long int fact = 1; 
    for(int i = num; i > 1; i--) { 
        fact *= i; 
    }
    cout << fact << endl; 
    cout << sizeof(fact) << endl; 
}