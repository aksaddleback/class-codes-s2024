#include<iostream>
using namespace std; 

int main() { 
    int stduentCount; 
    cout << "Enter num of students: "; 
    cin >> stduentCount; 
    int stCount = 0; 
    while(stCount < stduentCount) {    
        int numOfCourses; 
        cout << "Enter num of courses for student #" << stCount << ": "; 
        cin >> numOfCourses; 
        float sum = 0; 
        for(int i = 0; i < numOfCourses; i++) { 
            float grade; 
            cout << "Enter next grade: "; 
            cin >> grade; 
            sum += grade; 
        }
        cout << "GPA is: " << sum / numOfCourses << endl; 
        stCount++; 
    }
}