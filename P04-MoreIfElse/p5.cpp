#include<iostream> 
using namespace std; 
int main() { 
    float x, y; 
    cout << "Enter the x and y coordinates:"; 
    cin >> x >> y; 
    if (x > 0 && y > 0) { 
        cout << "Quadrant I";
    } else if (x < 0 && y > 0) { 
        cout << "Quadrant II";
    } else if (x < 0 && y < 0) { 
        cout << "Quadrant III";
    } else if (x > 0 && y < 0) { 
        cout << "Quadrant IV";
    } else if (x == 0 or y == 0) { 
        cout << "On the x or y axis";
    }
    cout << endl; 
}