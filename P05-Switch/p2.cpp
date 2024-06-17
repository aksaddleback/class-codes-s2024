#include<iostream> 
using namespace std; 
int main() { 
    int numOfSides; 
    cout << "Enter number of sides:";
    cin >> numOfSides; 
    switch (numOfSides) { 
        case 3: cout << "Triangles"; break; 
        case 4: cout << "Quadrilaterals"; break; 
        case 5: cout << "Pentagons"; break; 
        case 6: cout << "Hexagons"; break; 
        default: cout << "Wrong input!";
    }
    cout << endl; 
}