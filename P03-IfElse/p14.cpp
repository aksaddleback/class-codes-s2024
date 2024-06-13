#include<iostream> 
using namespace std; 
int main() { 
    int year; 
    cout << "Enter the year:";
    cin >> year; 
    // Solution 1
    if (year % 4 == 0) { // possible to be leap year, 2000 is leap year, 1900
        if (year % 400 == 0) {
            cout << "Leap Year!";
        } else if (year % 100 == 0) { 
            cout << "Not Leap Year!";
        } else { 
            cout << "Leap Year!";
        }
    } else { // not divisible by 4
        cout << "Not Leap Year!";
    }
    cout << endl; 

    // Solution 2
    if (year % 400 == 0) { 
        cout << "Leap Year!!";
    } else if (year % 100 == 0) { 
        cout << "Not Leap Year!!"; 
    } else if (year % 4 == 0) { 
        cout << "Leap Year!!"; 
    } else { 
        cout << "Not Leap Year!!";
    }
    cout << endl; 

    // Solution 3
    if (year % 100 == 0 && year % 400 != 0 || year % 4 != 0) { 
        cout << "Not Leap Year!!!";
    } else { 
        cout << "Leap Year!!!";
    }
    cout << endl; 
}