#include<iostream> 
using namespace std; 
int main() { 
    int x; 
    cout << "Which month # are you interested in knowing number of days?";
    cin >> x; 
    if (x == 2) { 
        cout << "28 days!";
    } else if (x == 4 or x == 6 or x == 9 or x ==11) { 
        cout << "30 days!";
    } else { 
        cout << "31 days!";
    }
    cout << endl; 
}