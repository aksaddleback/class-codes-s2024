#include<iostream> 
#include<fstream>
using namespace std; 

int main() { 
    ifstream f("input.txt");
    while(!f.eof()) { 
        string s; 
        getline(f, s);
        cout << s << endl; 
    }
    f.close();
}