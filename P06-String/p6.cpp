
    string word; 
    cout << "Enter a word:";
    cin >> word; 
    word[0] = 'S';
    int lastPos = word.length() - 1; 
    word[lastPos] = 'S'; // word[word.length() - 1] = 'S';
    cout << word << endl; 
}