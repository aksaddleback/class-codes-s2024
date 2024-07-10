#include <iostream> 
using namespace std;

double fahrenheitToCelsius(double far) { 
    //
    return (far - 32) / 1.8;
}

double celsiusToFahrenheit (double cel) { 
    // f = 32 + 1.8 * c
    return 32 + 1.8 * cel; 
}

double convertTemp (double temp, char unit) { 
    if (unit == 'c') { 
        return 32 + 1.8 * temp; 
    } else { 
        return (temp - 32) / 1.8;
    }
}

int main() { 
    cout << "Enter a temperature and its unit (c/f): ";
    double temp; 
    char unit; 
    cin >> temp >> unit; 
    if (unit == 'f') { 
        cout << fahrenheitToCelsius(temp) << endl;
    } else if (unit == 'c') { 
        cout << celsiusToFahrenheit(temp) << endl; 
    }
    cout << convertTemp(temp, unit) << endl;
}