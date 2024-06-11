#include<iostream> 
using namespace std; 
int main() { 
    int x = 12; 
    int y = 19; 
    cout << x << ", " << y << endl;
    int temp;
    temp = x;   // after running this line: temp = 12, x = 12, y = 19
    x = y;      // after running this line: temp = 12, x = 19, y = 19
    y = temp;   // after running this line: temp = 12, x = 19, y = 12
    cout << x << ", " << y << endl; 
}