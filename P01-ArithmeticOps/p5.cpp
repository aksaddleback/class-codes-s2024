#include<iostream> 
using namespace std; 
int main() { 
    double fahrenheit, celsius;
    cout << "Enter the temp in fahrenheit: "; 
    cin >> fahrenheit; 
    // °C = (°F - 32) * 5/9
    celsius = (fahrenheit - 32) * 5/9;
    cout << "The temperature in celcius is: " << celsius << endl; 
}