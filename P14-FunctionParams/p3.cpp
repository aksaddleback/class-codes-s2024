#include<iostream> 
using namespace std; 

void sum(int a, int b, int &s) { 
    s = a + b; 
}

int main() { 
    int x = 10, y = 20, res = -1; 
    sum(x, y, res); 
    cout << res << endl; 
}