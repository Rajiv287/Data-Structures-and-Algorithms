/*
Question: Armstrong Number

Approach:
1. Input a number
2. Extract each digit and add cube of digit
3. Compare the sum with the original number

Time Complexity: O(d), where d is the number of digits
Space Complexity: O(1)
*/

// WAP to input a number and check whether the number is an Armstrong number or not
#include<iostream>
using namespace std; 
int main(){
    int n,temp,rem,sum=0;
    cout<<"Enter a number"<<endl;
    cin>>n;
    
    temp = n;
    while(temp!=0){
        rem = temp % 10;
        temp/=10;

        sum += rem * rem * rem;
    } 
    if(n==sum){
        cout<<"it is armstrong number"<<endl;
    }else{
        cout<<"it is not armstrong number"<<endl;
    }
    return 0;
}
