// "destination.txt"
#include<iostream> 
#include<fstream> 
using namespace std; 

void copyFile(string inFileName, string outfileName) { 
    ifstream inFile(inFileName);
    ofstream outFile(outfileName);
    int i = 0; 
    while(!inFile.eof()) { 
        string line;
        getline(inFile, line); 
        if (i++ % 2 == 0) { 
            continue;
        }
        outFile << line << endl; 
    }
    inFile.close();
    outFile.close(); 
}

int main() { 
    copyFile("source.txt", "destination.txt");
}