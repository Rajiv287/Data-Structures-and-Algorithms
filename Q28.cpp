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