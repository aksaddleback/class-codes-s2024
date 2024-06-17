#include <iostream>
using namespace std;

int main()
{
    float grade;
    cout << "Enter the number grade:";
    cin >> grade;
    grade = grade == 100 ? 99 : grade;
    int g = grade / 10;
    switch (g)
    {
    case 9:
        cout << "A";
        break;
    case 8:
        cout << "B";
        break;
    case 7:
        cout << "C";
        break;
    case 6:
        cout << "D";
        break;
    case 5:
    case 4:
    case 3:
    case 2:
    case 1:
    case 0:
        cout << "F";
        break;
    default:
        cout << "Invalid input!";
        break;
    }
    cout << endl;
}