/*
Question: Star Triangle Pattern

Approach:
1. Input number of rows
2. Use nested loops for rows and stars
3. Print increasing stars in each row

Time Complexity: O(n^2)
Space Complexity: O(1)
*/

// WAP for *
//         * *
//         * * *
//         * * * * 

#include<iostream>
using namespace std;

int main (){
    int n;
    cout<<"enter n"<<endl;
    cin>>n;

    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
        cout<<"* ";
        }
         cout<<endl;  
    }

    return 0;
}
