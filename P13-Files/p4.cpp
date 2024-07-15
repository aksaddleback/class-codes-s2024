#include<iostream> 
#include<fstream> 
using namespace std; 

int countLines(string fn) { 
    ifstream file(fn);
    int i = 0; 
    while(!file.eof()) { 
        string s; 
        getline(file, s); 
        i++; 
    }
    file.close();
    return i; 
}

int countWords(string fn) { 
    ifstream file(fn);
    int wordsCount = 0; 
    while(!file.eof()) { 
        string s; 
        getline(file, s); 
        for(int i = 0; i < s.length(); i++) { 
            if (i == 0 && s[i] != ' ') { 
                wordsCount++;
            } else if (s[i] == ' ') { 
                wordsCount++; 
            }
        }
    }
    file.close();
    return wordsCount; 
}

int countChars(string fn) { 
    ifstream file(fn);
    int i = 0; 
    while(!file.eof()) { 
        string s; 
        getline(file, s); 
        i += s.length(); 
    }
    file.close();
    return i; 
}


int main() { 
    int numOfLines = countLines("source.txt");
    cout << "The file has " << numOfLines << " lines!\n";
    int numOfWords = countWords("source.txt");
    cout << "The file has " << numOfWords << " words!\n";
    int numOfChars = countChars("source.txt");
    cout << "The file has " << numOfChars << " characters!\n";
}