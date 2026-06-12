/*
Question: Prime Number Check

Approach:
1. Input a number
2. Check divisibility from 2 to sqrt(n)
3. Print whether the number is prime or not

Time Complexity: O(sqrt(n))
Space Complexity: O(1)
*/

// WAP to check if a number is prime or not and its optimized way
#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    bool isprime = true;
    cout<<"enter a number"<<endl;
    cin>>n;
    if(n==0||n==1){
        isprime=false;
    }
    
    int limit = sqrt(n);
    for(int i = 2; i <= limit; i++){
        if(n%i==0){
            isprime = false;
            break;
        }
    }
    if(isprime==true){
        cout<<"prime";
    }else{
        cout<<"not prime";
    }
    

    return 0;
}
