/*
Question: Reverse a Number

Approach:
1. Input a number
2. Extract each digit from the end
3. Build reversed number using rev = rev * 10 + digit

Time Complexity: O(d), where d is the number of digits
Space Complexity: O(1)
*/

#include<iostream>
using namespace std;

int main() {
    int n, temp, rem, rev = 0;
    
    cout << "Enter a number" << endl;
    cin >> n;

    temp = n;

    while(temp != 0){
        rem = temp % 10;
        temp = temp / 10;

        rev = rev * 10 + rem;   // magic line for reverse
    }

    cout << "Reversed number = " << rev;

    return 0;
}
