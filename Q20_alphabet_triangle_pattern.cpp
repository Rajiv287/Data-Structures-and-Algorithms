/*
Question: Alphabet Triangle Pattern

Approach:
1. Input number of rows
2. Start from character A
3. Print next alphabet in triangle form

Time Complexity: O(n^2)
Space Complexity: O(1)
*/

#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "enter n: ";
    cin >> n;

    char alpha = 'A';

    for(int i = 0; i < n; i++){
        for(int j = 0; j <= i; j++){
            cout << alpha << " ";
            alpha++;  // move to next letter
        }
        cout << endl;
    }

    return 0;
}

