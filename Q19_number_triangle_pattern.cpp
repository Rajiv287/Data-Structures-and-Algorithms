/*
Question: Number Triangle Pattern

Approach:
1. Input number of rows
2. Use nested loops for rows and numbers
3. Print numbers from 1 to current row

Time Complexity: O(n^2)
Space Complexity: O(1)
*/

// WAP for 1
//         1 2 
//         1 2 3 
//         1 2 3 4 

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter n";
    cin>>n;

    for(int i=1; i<=n; i++){
        for(int j=1;j<=i; j++){
            cout<<j<<" ";
            
        }
        cout<<endl;
    }


    return 0;
}
