#include<iostream> 
using namespace std; 
int main() { 
    int x, y; 
    cin >> x >> y;
    cout << x << ", " << y << endl;
    // let's say at this point x = 12 and y = 19 entered by user. 
    x = x + y;     // x = 31, y = 19
    y = x - y;     // x = 31, y = 12
    x = x - y;     // x = 19, y = 12; 
    cout << x << ", " << y << endl; 
}