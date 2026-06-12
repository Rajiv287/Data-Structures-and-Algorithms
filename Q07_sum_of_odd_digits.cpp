/*
Question: Sum of Odd Digits

Approach:
1. Input a number
2. Extract each digit using modulo
3. Add only odd digits and print the sum

Time Complexity: O(d), where d is the number of digits
Space Complexity: O(1)
*/

// WAP to print the sum of odd digits of a number using while loop 
#include<iostream>
using namespace std;

int main(){
    int n,temp, check,sum = 0;
    cout<<"enter a number"<<endl;
    cin>>n;
    
    temp = n;

    while(temp != 0){
        check = temp % 10;
        temp /= 10;
        if(check%2!=0){
            sum += check;
        }
    } 

    cout<<"the sum of odd digits of your number is = "<<sum;


    return 0;
}
