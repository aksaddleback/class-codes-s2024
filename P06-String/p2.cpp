#include<iostream> 
using namespace std; 

int main() { 
    string w1, w2; 
    cout << "Enter w1:";
    cin >> w1; 
    cout << "Enter w2:";
    cin >> w2; 
    string concat = w1 + " " + w2; 
    cout << concat << endl; 
    cout << w1 + " " + w2 << endl; 
    //cout << w1 << " " << w2 << endl; 
}