#include <iostream>
using namespace std;
int main()
{
    int expirationDate; 
    cout << "Enter the expiration date:"; 
    cin >> expirationDate; 
    string expiredOrNot = expirationDate >= 2024 ? "Not Expired" : "Expired"; 
    cout << expiredOrNot << endl; 
}