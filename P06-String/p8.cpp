#include <iostream>
using namespace std;

int main() { 
    string str; 
    getline(cin, str); 
    str[0] = 's';
    int len = str.length(); 
    str[len - 1] = 's';
    str[len / 2] = 's'; // if len is 11, we change position 5, if it is 12, we change position 6
    if (len % 2 == 0) { 
        str[len / 2 - 1] = 's'; 
    }
    cout << str << endl; 
}