#include <iostream>
using namespace std;

int main() { 
    int count; 
    cout << "Enter number of items: "; 
    cin >> count; 
    int sum = 0; 
    for(int i = 0; i < count; i++) { 
        int price; 
        cout << "Enter price of item #" << i + 1 << ": ";
        cin >> price; 
        sum += price; 
    }
    cout << sum << endl; 
}