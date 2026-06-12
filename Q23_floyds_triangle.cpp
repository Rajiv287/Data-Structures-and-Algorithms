/*
Question: Floyd's Triangle

Approach:
1. Input number of rows
2. Keep a counter starting from 1
3. Print increasing count values in triangle form

Time Complexity: O(n^2)
Space Complexity: O(1)
*/

// WAP Floyd's Triangle
// 1 
// 2 3
// 4 5 6
// 7 8 9 10

#include<iostream>
using namespace std;
int main(){
  int n;
  cout<<"enter n";
  cin>>n;
  int alpha = 1;
  for(int i = 1; i <= n; i++){
    for(int j = 1; j <= i; j++){
        cout<<alpha<<" ";
        alpha++;
    }
    cout<<endl;
  }
}
