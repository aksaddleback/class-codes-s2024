#include<iostream> 
using namespace std; 
int main() { 
    double price; 
    cout << "Enter the price: "; 
    cin >> price; 
    double pricePlusTax = price + price * 0.09; 
    // pricePlusTax = price * 1.09; 
    cout << pricePlusTax << endl; 
}