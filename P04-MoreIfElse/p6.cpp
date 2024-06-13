#include<iostream> 
using namespace std; 
int main() { 
    int numOfSides; 
    cout << "Enter number of sides: "; 
    cin >> numOfSides; 
    string shape = (numOfSides == 3) ? "Triangle" : ((numOfSides == 4) ? "Quadrilateral" : "Invalid Input");
    string shape2; 
    if (numOfSides == 3) { 
        shape2 = "Triangle";
    } else if (numOfSides == 4) { 
        shape2 = "Quadrilateral";
    } else { 
        shape2 = "Invalid Input";
    }
    cout << shape << endl << shape2 << endl;
}