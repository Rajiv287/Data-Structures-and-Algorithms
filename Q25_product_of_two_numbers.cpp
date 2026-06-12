/*
Question: Product of Two Numbers

Approach:
1. Input two numbers
2. Pass them to product function
3. Return and print their multiplication

Time Complexity: O(1)
Space Complexity: O(1)
*/

// WAP to find the product of 2 numbers a & b

#include<iostream>
using namespace std;
int product(int a , int b){
    return a*b;
}

int main(){
 int a =2,b=4;
 int result = product(a,b);
 cout<<"product of a and b is = "<<result;

 return 0;
}
