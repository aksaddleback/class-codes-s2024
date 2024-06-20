#include <iostream>
using namespace std;

int main() { 
    string password = "";
    for(;;){ // infinite loop which ends with a break statement.
        cout << "Enter the password: ";
        cin >> password; 
        if (password == "Saddleback!") { 
            cout << "Correct Password!\n";
            break; 
        }
        cout << "Wrong password! Try again.\n";
    }
    cout << "End!\n";
}