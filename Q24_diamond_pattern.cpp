/*
Question: Diamond Star Pattern

Approach:
1. Input number of rows for upper half
2. Print spaces and stars for upper pyramid
3. Print spaces and stars for lower pyramid

Time Complexity: O(n^2)
Space Complexity: O(1)
*/

// WAP for diamond pattern problem

#include<iostream>
using namespace std;

int main(){
  int n;
  cout<<"enter n";
  cin>>n;

  // Upper part
  for(int i = 1; i <= n; i++){
    for(int j = 1; j <= n-i; j++){
        cout<<" ";
    }
    for(int j = 1; j <= 2*i-1; j++){
        cout<<"*";
    }
    cout<<endl;
  }

  // Lower part
  for(int i = n-1; i >= 1; i--){
    for(int j = 1; j <= n-i; j++){
        cout<<" ";
    }
    for(int j = 1; j <= 2*i-1; j++){
        cout<<"*";
    }
    cout<<endl;
  }
}
