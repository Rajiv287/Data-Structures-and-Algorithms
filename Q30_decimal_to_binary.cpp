/*
Question: Decimal to Binary

Approach:
1. Input decimal number
2. Repeatedly divide by 2 and store remainders
3. Build and print the binary number

Time Complexity: O(log n)
Space Complexity: O(1)
*/

// WAP for decimal to binary 
#include <iostream>
using namespace std;

void dectobinary(int dec){
    int n = dec;
    int pow = 1;
    int bin = 0;
    while(n>0){
        int rem = n%2;
        bin += rem *pow;
        n= n/2;
        pow = pow *10;
    }
    cout << bin<<endl;
}
int main(){
dectobinary(71);

    return 0;
}
