#include<iostream> 
using namespace std; 
int main() { 
    int age; 
    cout << "Enter the age to see the price: ";
    cin >> age; 
    if (age > 0 and age <= 12) { 
        cout << "Children, $5"; 
    } else if (age <= 18) {
        cout << "Teen, $8"; 
    } else if (age > 18 and age < 65) {
        cout << "Adults, $12"; 
    } else if (age >= 65) { 
        cout << "Seniors, $6"; 
    }
    cout << endl; 
}

