#include<iostream> 
using namespace std; 

void getHeights(double a[5]) { 
    for(int i = 0; i < 5; i++) { 
        cout << "Enter next student's height: ";
        cin >> a[i];
    }
}

void printHeights(double a[5]) { 
    for(int i = 0; i < 5; i++) { 
        cout << a[i] << endl; 
    }
}

int main() {
    double heights[5]; 
    // why not having individual vairalbes for 5 heights? like the following? 
    double h1, h2, h3, h4, h5; 
    /* what if we have 500 students? 
        - then we would need 500 variables. who would type names for 500 variables.
        - how would we cin and cout 500 variables? 
        cin >> h1 >> h2 >> h3 >> ....... 
        cout << h1 << h2 ....
    */
    getHeights(heights); 
    printHeights(heights);
}