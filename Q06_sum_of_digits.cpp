/*
Question: Sum of Digits

Approach:
1. Input a number
2. Extract digits using modulo and division
3. Add each digit and print the sum

Time Complexity: O(d), where d is the number of digits
Space Complexity: O(1)
*/

// WAP to print the sum of digits of a number using while loop

#include<iostream> 
using namespace std;

int main() {
    int n , rem ;
    int sum = 0;
    
    cout<<"enter a number"<<endl;
    cin>>n;

    while(n!=0){
       sum += n%10;
       n/=10;
    }
    cout<<"sum of your digit is = "<<sum;

    return 0; 
}

