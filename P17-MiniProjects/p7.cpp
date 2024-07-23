#include<iostream>
#include<fstream>

using namespace std; 

int TOTALCOUNT = 1000000;

int showMenu() { 
    cout << "Make a choice: 1) generate a file with sorted numbers. 2) search in file. 3) exit.\n";
    int x; 
    cin >> x; 
    return x; 
}

void readFile(string fn, int a[]) { 
    ifstream f("sortedNums.txt");
    for(int i = 0; i < TOTALCOUNT; i++) { 
        f >> a[i];
    }
    f.close();
}

void generateSortedFile() { 
    ofstream f("sortedNums.txt");
    int n = 0; 
    for(int i = 0; i < TOTALCOUNT; i++) { 
        int r = rand() % 10 + 1;
        n += r;
        f << n << " ";
    }
    f.close();
}

int binSearch(int arr[], int x) { 
    int pos = -1;
    int left = 0, right = TOTALCOUNT - 1;
    int numberOfTimesWhileLoopRuns = 0;
    while (left <= right) { 
        numberOfTimesWhileLoopRuns++;
        int mid = (left + right) / 2;
        if (x > arr[mid]) { 
            left = mid + 1; 
        } else if (x < arr[mid]) { 
            right = mid - 1;
        } else { 
            pos = mid; 
            break; 
        }
    }
    cout << "We compared the number with " << numberOfTimesWhileLoopRuns << " numbers in the array!\n";
    return pos; 
}

void search() { 
    cout << "Enter a number to search in the file: ";
    int x; 
    cin >> x; 
    int arr[TOTALCOUNT];
    readFile("sortedNums.txt", arr);
    int pos = binSearch(arr, x);
    if (pos == -1){ 
        cout << "Number not found in the array!\n";
    } else { 
        cout << "Number found at position " << pos + 1 << "!\n";
    }
}

int main() { 
    bool continueProgram = true; 
    while(continueProgram) { 
        int chosenItem = showMenu();
        switch(chosenItem) {
            case 1: generateSortedFile(); break;
            case 2: search(); break;
            case 3: continueProgram = false; break; 
            default: cout << "Wront choice. Try again!\n";
        }
    }
}