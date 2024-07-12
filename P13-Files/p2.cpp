#include<iostream>
#include<fstream> 
using namespace std; 

int main() { 
    cout << "Enter a few lines of text to save into a file. Enter stop to end the program.\n"; 
    ofstream f("output.txt");
    string s; 
    do { 
        getline(cin, s);
        if (s == "stop") { 
            break; 
        }
        f << s << endl; 
    } while (s != "stop");
    f.close(); 
}