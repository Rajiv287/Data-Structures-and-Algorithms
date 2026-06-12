// WAP to print if a number is odd or even.

#include<iostream>
using namespace std;

void checkNum(int n){
    if(n%2==0){
        cout<<"the number is even";
    }else{
        cout<<"the number is odd";
    }
}

int main(){
int n = -8;
checkNum(n);
    return 0;
}