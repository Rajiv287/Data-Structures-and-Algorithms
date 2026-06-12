/*
Question: Hollow Square Star Pattern

Approach:
1. Input size of square
2. Use nested loops for rows and columns
3. Print star on border and space inside

Time Complexity: O(n^2)
Space Complexity: O(1)
*/

// WAP for * * * * * 
//         *       *
//         *       *
//         * * * * *

#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the value of n";
    cin>>n;

    for(int i = 0;i<=n-1;i++){
        for(int j = 0;j<=n-1;j++){
            if(i==0||i==n-1||j==0||j==n-1){
                cout<<"* ";
            }else{
                cout<<"  ";
            };
        }
        cout<<endl;
    }
}



