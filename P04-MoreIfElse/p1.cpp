#include<iostream> 
using namespace std; 
int main (){ 
    float grade; 
    cout << "What is the number grade?";
    cin >> grade; 
    if (grade > 100 or grade < 0) { 
        cout << "Invalid input!";
    } else if (grade >= 90) { 
        cout << "A";
    } else if (grade >= 80) { 
        cout << "B";
    } else if (grade >= 70) { 
        cout << "C";
    } else if (grade >= 60) { 
        cout << "D";
    } else { 
        cout << "F"; 
    }
    cout << endl; 
}