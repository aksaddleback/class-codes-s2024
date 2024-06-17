#include<iostream> 
using namespace std; 

int main() { 
    int choice; 
    cout << "Enter the menu item: "; 
    cin >> choice; 
    switch(choice) { 
        case 1: cout << "Price is your choice is 10"; break; 
        case 2: cout << "Price is your choice is 20"; break; 
        case 3: cout << "Price is your choice is 30"; break; 
        case 4: cout << "Price is your choice is 25"; break; 
        case 5: cout << "Price is your choice is 39"; break; 
        default: cout << "Wrong choice!";
    }
    cout << endl; 
}