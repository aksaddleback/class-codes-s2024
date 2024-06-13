#include<iostream> 
using namespace std; 
int main() { 
    int choice; 
    cout << "Enter your choice:";
    cin >> choice; 
    if (choice == 1) { 
        cout << 10; 
    } else if (choice == 2) { 
        cout << 20; 
    } else if (choice == 3) { 
        cout << 30; 
    } else if (choice == 4) { 
        cout << 25; 
    } else if (choice == 5) { 
        cout << 39; 
    } else { 
        cout << "Not in menu!"
    }
    cout << endl; 
}
