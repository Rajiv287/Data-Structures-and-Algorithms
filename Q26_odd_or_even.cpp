/*
Question: Odd or Even Number

Approach:
1. Input a number
2. Check remainder when divided by 2
3. Print even if remainder is 0, otherwise odd

Time Complexity: O(1)
Space Complexity: O(1)
*/

// WAP to print if a number is odd or even.

#include<iostream>
using namespace std;

void checkNum(int n){
    if(n%2==0){
        cout<<"the number is even";
    }else{
        cout<<"the number is odd";
    }
}

int main(){
int n = -8;
checkNum(n);
    return 0;
}
