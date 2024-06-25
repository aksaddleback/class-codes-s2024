#include <iostream>
using namespace std;

int main() { 
    int x1, x2; 
    bool isAscending = true; 
    for(int i = 0; i < 5; i++) { 
        if (i == 0) { 
            cin >> x1; 
            continue; 
        } 
        cin >> x2; 
        if (x2 < x1) { 
            isAscending = false; 
        } else { 
            x1 = x2; 
        }
    }
    if (isAscending == true) { 
        cout << "Ascending!\n";
    } else { 
        cout << "Not Ascending!\n";
    }
}