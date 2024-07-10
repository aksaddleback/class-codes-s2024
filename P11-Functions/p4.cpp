#include <iostream> 
using namespace std; 

void greeting(string name) { 
    if (name != "end") { 
        cout << "Hello, " << name << endl; 
    }
}

int main() { 
    string name; 
    do { 
        cout << "Enter a name: "; 
        cin >> name; 
        greeting(name);
    } while (name != "end");
}