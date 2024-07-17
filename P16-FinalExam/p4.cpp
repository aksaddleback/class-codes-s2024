#include<iostream> 
#include<fstream> 
using namespace std; 

void readBoard(char b[3][3], string fn) { 
    ifstream f(fn);
    for(int i = 0; i < 3; i++) { 
        for(int j = 0; j < 3; j++) { 
            f >> b[i][j];
        }
    }
    f.close(); 
}

void printBoard(char b[3][3]) { 
    for(int i = 0; i < 3; i++) { 
        for(int j = 0; j < 3; j++) { 
            cout << b[i][j] << " ";
        }
        cout << endl; 
    }
}

void turn(char b[3][3]) { 
    int x = 0, o = 0; 
    for(int i = 0; i < 3; i++) { 
        for(int j = 0; j < 3; j++) { 
            if (b[i][j] == 'X') { 
                x++; 
            } else if (b[i][j] == 'O') { 
                o++; 
            }
        }
    }
    if (x == o) { 
        cout << "It is turn of X\n";
    } else { 
        cout << "It is turn of O\n";
    }
}

void ended(char b[3][3]) { 
    bool ended = true; 
    for(int i = 0; i < 3; i++) { 
        for(int j = 0; j < 3; j++) { 
            if (b[i][j] != 'X' or b[i][j] != 'O') { 
                ended = false; 
            }
        }
    }
    if (ended) { 
        cout << "Game Ended\n";
    } else { 
        cout << "Game Not Ended\n";
    }
}

int main() { 
    char a[3][3];
    readBoard(a, "tictactoe.txt");
    printBoard(a);
    turn(a);
    ended(a);
}