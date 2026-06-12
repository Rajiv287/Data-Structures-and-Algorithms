/*
Question: Inverted Star Triangle Pattern

Approach:
1. Input number of rows
2. Start from n stars and decrease every row
3. Print stars using nested loops

Time Complexity: O(n^2)
Space Complexity: O(1)
*/

// WAP for * * * *
//         * * *
//         * *
//         *

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter n";
    cin>>n;

    for(int i=n;i>=1;i--){
        for(int j=1; j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }

    return 0;
}
    
