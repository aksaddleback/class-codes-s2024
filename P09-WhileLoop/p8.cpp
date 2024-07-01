#include<iostream>
using namespace std; 

int main() { 
    int term = 1; 
    int ratio = 2; 
    int i = 0; 
    long int seqVal = term; 
    cout << "How many terms in the sequence you would like me to print? ";
    int count; 
    cin >> count; 
    while (i < 64) { 
        seqVal = seqVal * ratio; 
        cout << seqVal << endl;  
        i++; 
    }
}