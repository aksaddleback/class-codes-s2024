// 12 2 5 9 0 2 9 5 12 0
#include<iostream> 
using namespace std;

void getNumbers(int a[5]) { 
    for(int i = 0; i < 5; i++) { 
        cin >> a[i];
    }
}

bool checkArrays(int a[5], int b[5]) { 
    // we assume there is not repeate numbers in the array a or b
    for(int i = 0; i < 5; i++) { // going over all elements in a, one by one
        bool found = false; 
        for(int j = 0; j < 5; j++) { 
            if (a[i] == b[j]) { 
                found = true; 
                break; // from inner loop 
            }
        }
        if (found == false) { // if (!found)
            return false; 
        }
    }
    return true; 
}

int main() { 
    int a[5], b[5];
    getNumbers(a);
    getNumbers(b);
    bool shuffled = checkArrays(a, b);
    if (shuffled) { 
        cout << "Yes\n";
    }
    else { 
        cout << "No\n";
    }
}