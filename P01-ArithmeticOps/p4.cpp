#include<iostream> 
using namespace std; 
int main() { 
    double r; 
    cout << "Enter the radius: ";
    cin >> r;
    double vol = 4.0/3 * (r*r*r) * 3.14; 
    //double vol = 4 * (r*r*r) * 3.14 / 3;     
    cout << vol << endl; 
    //4/3 will be 1 in the next two lines since it is an integer division
    //double f = 4/3; 
    //cout << f << endl; 
}