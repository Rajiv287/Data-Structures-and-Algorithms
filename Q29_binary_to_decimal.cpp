/*
Question: Binary to Decimal

Approach:
1. Input binary number
2. Extract digits from right side
3. Multiply each digit by power of 2 and add to decimal answer

Time Complexity: O(d), where d is the number of binary digits
Space Complexity: O(1)
*/

// WAP for binary to decimal
#include<iostream>
using namespace std;
void bintodecimal(int bin){
    int n = bin;
    int dec = 0;
    int pow=1;
    while(n>0){
        int lastdig = n%10;
        dec += lastdig*pow;
        pow = pow *2;
        n = n/10;
    }
cout<<dec<<endl;
}

int main(){
 bintodecimal(1011);

    return 0;
}
