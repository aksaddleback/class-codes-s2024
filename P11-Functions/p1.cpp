#include<iostream>
using namespace std; 

string getSubstr(string str, int start, int end) { 
    string substr = "";
    if (start > str.length() - 1 or end > str.length() - 1 or start < 0 or end < 0) { 
        return "Error, Out of Range!";  // check if start or end is out of range
    }
    for(int i = start; i <= end; i++){ 
        substr = substr + str[i];
    }
    return substr; 
}

bool isPalindrome(string s) { 
    int start = 0, end = s.length() - 1; 
    while (start < end) { 
        if (s[start] != s[end]) { 
            return false; 
        }
        start++; 
        end--;
    }
    return true; 
}

int main() { 
    string s = "zabracecarbax";
    for(int i = 0; i < s.length() - 1; i++) {  
        for(int j = i + 1; j < s.length(); j++) {
            string substring = getSubstr(s, i, j);
            bool isPal = isPalindrome(substring);
            if (isPal) {
                cout << substring << endl; 
            }
        }
    }
    /*  let's say that our problem also asked to print the substring
        that starts at position 5 and ends at position 9. we 
        can use the same function for that purpose. 
        */
    cout << "5-9 Substring: " << getSubstr(s, 5, 90) << endl;
}