/*
Question: Enter Numbers Until Multiple of 10

Approach:
1. Keep taking input from user
2. Check whether number is divisible by 10
3. Stop the loop when a multiple of 10 is entered

Time Complexity: O(k), where k is the number of inputs
Space Complexity: O(1)
*/

// WAP where user can keep entering numbers till they enter a multiple of 10
#include<iostream>
using namespace std;
int main (){
    int n;
    cout<<"enter a number"<<endl;
    cin>>n;

    while(n%10!=0){
        cout<<"enter another number"<<endl;
        cin>>n;
        cout<<"it is multiple of 10";
    }
cout<<"it is multiple of 10";
    return 0;
}
