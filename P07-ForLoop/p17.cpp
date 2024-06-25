#include <iostream>
using namespace std;

int main() { 
    int sum = 0; 
    for(;;) { 
        int num; 
        cout << "Enter the next num: ";
        cin >> num; 
        if (num == 0) { 
            break; 
        } else { 
            sum += num; 
        }
    }
    cout << "The sum is: " << sum << endl; 
}