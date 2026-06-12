/*
Question: Multiplication Table

Approach:
1. Input a number
2. Run loop from 1 to 10
3. Print number multiplied by each loop value

Time Complexity: O(1)
Space Complexity: O(1)
*/

// WAP to print the multiplication table of a number,entered by the user
#include<iostream>
using namespace std;
int main (){
    int n;
    cout<<"enter a number"<<endl;
    cin>>n;

    cout<<"Table of this number is :-"<<endl;
    for(int i = 1; i<=10 ; i++){
        cout<<n*i <<endl;
    }
    return 0;
}
