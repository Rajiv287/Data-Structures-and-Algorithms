/*
Question: Number Rectangle Pattern

Approach:
1. Input number of rows and columns
2. Use nested loops for rows and columns
3. Print row number in each column

Time Complexity: O(n^2)
Space Complexity: O(1)
*/

// WAP for 1 1 1 1
//         2 2 2 2
//         3 3 3 3
//         4 4 4 4 

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter the number";
    cin>>n;

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
               cout<<i<<" ";
        }
        cout<<endl;
    }

return 0;
}
