#include <iostream> 
using namespace std; 

void printNums(int n) { 
    for(int i = 1; i <=n; i++) { 
        cout << i << endl; 
    }
}

int main() { 
    int x; 
    cin >> x; 
    printNums(x);
}