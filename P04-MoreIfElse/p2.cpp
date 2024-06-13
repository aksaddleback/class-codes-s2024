#include<iostream> 
using namespace std; 
int main() { 
    int hour; 
    cout << "Enter the hour:"; 
    cin >> hour; 
    if (hour > 5 and hour < 12) { 
        cout << "Good morning"; 
    } else if (hour > 12 and hour < 16) { 
        cout << "Good afternoon"; 
    } else if (hour >= 16 and hour < 19) { 
        cout << "Good evening"; 
    } else if (hour >= 19) { 
        cout << "Good night"; 
    }
    cout << "\n";
}