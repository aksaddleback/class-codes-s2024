#include<iostream> 
using namespace std; 

int main() { 
    string name; 
    cout << "Enter your name:";
    cin >> name; 
    string greetingMsg = "Hello " + name + "!\n";
    cout << greetingMsg;
    cout << "Hello " << name << "!\n";
}