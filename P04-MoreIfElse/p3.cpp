#include<iostream> 
using namespace std; 
int main() { 
    float angle1, angle2, angle3; 
    cout << "Enter 3 angles of the triangles: "; 
    cin >> angle1 >> angle2 >> angle3; 
    float sum = angle1 + angle2 + angle3; 
    int countOfRighOrAbtuse = (angle1 >= 90) ? 1 : 0; 
    countOfRighOrAbtuse += (angle2 >= 90) ? 1 : 0; 
    countOfRighOrAbtuse += (angle3 >= 90) ? 1 : 0; 

    if (sum != 180 or countOfRighOrAbtuse > 1) {
        cout << "Invalid values!";
    } else if (angle1 == 90 or angle2 == 90 or angle3 == 90) {
        cout << "Right Triangle!";
    } else if (angle1 > 90 or angle2 > 90 or angle3 > 90) { 
        cout << "Obtues Triangle!"; 
    } else { 
        cout << "Actue Triangle!";
    }
    cout << endl; 
}