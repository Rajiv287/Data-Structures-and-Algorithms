/*
Question: Right-Aligned Star Triangle Pattern

Approach:
1. Input number of rows
2. Print spaces before stars in each row
3. Print increasing stars after spaces

Time Complexity: O(n^2)
Space Complexity: O(1)
*/

// WAP to print pattern
//         *
//       * *
//     * * *
//   * * * *
// * * * * *


#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter n";
    cin>>n;

for(int i = 0; i < n; i++){ 
    // for sapce
    for(int j = 0; j < n-i-1; j++){
    cout<<"  ";
    }
    // for star
    for(int k = 0; k <= i; k++){
        cout<<"* ";
    }
    cout<<endl;
}

    return 0;
}
