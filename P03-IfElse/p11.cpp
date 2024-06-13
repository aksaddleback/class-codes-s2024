#include<iostream> 
using namespace std; 
int main() { 
    int numOfSides; 
    cin >> numOfSides; 
    if (numOfSides == 3) { 
        cout << "Triangles";
    } else if (numOfSides == 4) { 
        cout << "Quadrilaterals"; 
    } else if (numOfSides == 5) { 
        cout << "Pentagons";
    } else if (numOfSides == 6) { 
        cout << "Hexagons";
    }
    cout << endl; 
}