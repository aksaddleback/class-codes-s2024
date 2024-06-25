#include <iostream>
using namespace std;

int main() { 
    int num; 
    int posNumCount = 0;
    for(;;) { // infinite loop and we will end loop repetition using break statement
        cout << "Enter the next number: ";
        cin >> num; 
        if (num >= 0) { 
            posNumCount++;
        } else {
            break; 
        }
    }
    cout << "Count of positive numbers you entered: " << posNumCount << endl; 
}