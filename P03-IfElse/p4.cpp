#include<iostream> 
using namespace std; 
int main() { 
    int x; 
    cout << "Enter a number: "; 
    cin >> x; 
    if (x > 10) { 
        cout << x << " is more than 10!\n";
    } else if (x < 10) { 
        cout << x << " is less than 10!\n";
    } else { 
        cout << x << " is equal to 10!\n";
    }
}