/*
Question: Binomial Coefficient

Approach:
1. Input n and r
2. Calculate factorial of n, r, and n-r
3. Use formula nCr = n! / (r! * (n-r)!)

Time Complexity: O(n)
Space Complexity: O(1)
*/

// WAP to find the binomial cofficient for given n & s 

#include<iostream>
using namespace std;
int fact(int n){
    int res = 1;
    for(int i=1;i<=n;i++){
        res *= i;
    }
    return res;
}

int bino(int a , int b){
    return fact(a)/(fact(b)*fact(a-b));
}

int main(){
   int n,r;
   cout<<"enter n";
   cin>>n;
   cout<<"enter r";
   cin>>r;
   int result = bino(n,r);
   cout<<result;

    return 0;
}
