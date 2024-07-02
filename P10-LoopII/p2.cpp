#include<iostream>
using namespace std; 

int main() { 
    string word; 
    string revWord; 
    // nested loops
    do { //outer loop -- let's say if it runs 10 times
        cout << "Enter a word: ";
        cin >> word; 
        revWord = "";
        for(int i = 0; i < word.length(); i++) { // inner loop -- let's say if in average this runs 7 times
            revWord = word[i] + revWord;         // this will run 70 times in total for the whole program
        }
        cout << "Revers of your word is: " << revWord << endl;
    } while (word != "stop");
}