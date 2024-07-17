#include<iostream> 
using namespace std; 

void printBoard(char b[3][3]) { 
    for(int i = 0; i < 3; i++) { 
        for (int j = 0; j < 3; j++) { 
            cout << b[i][j] << " "; 
        }
        cout << endl; 
    }
}

void play(char t, char b[3][3]) { 
    printBoard(b);
    do { 
        cout << "Player " << t << ", "; 
        cout << "where would you like to put the piece?\n";
        cout << "Enter two numbers between 0 and 2: "; 
        int x, y; 
        cin >> x >> y; 
        if (b[x][y] == '_') { 
            b[x][y] = t; 
            break; 
        } else { 
            cout << "Wrong coordinates! Enter valid inputs.\n";
        }
    } while (true);
}

char checkWin(char b[3][3]) { 
    for(int row = 0; row < 3; row++) { 
        if(b[row][0] == b[row][1] and b[row][1] == b[row][2]) { 
            return b[row][0];
        }
    }

    for(int col = 0; col < 3; col++) { 
        if(b[0][col] == b[1][col] and b[1][col] == b[2][col]) { 
            return b[0][col];
        }
    }

    if (b[0][0] == b[1][1] and b[1][1] == b[2][2]) { 
        return b[0][0];
    }

    if (b[0][2] == b[1][1] and b[1][1] == b[2][0]) { 
        return b[0][0];
    }

    return '_';
}

int main() { 
    char board[3][3] = {
        {'_', '_', '_'},
        {'_', '_', '_'},
        {'_', '_', '_'},
    };

    char turn = 'X'; 
    char won = ' ';
    do { 
        play(turn, board);
        won = checkWin(board);
        turn = turn == 'X' ? 'O' : 'X';
    } while(won == '_');
    printBoard(board);
    cout << "Player " << won << " won the game!\n";
}