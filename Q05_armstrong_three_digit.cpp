/*
Question: Armstrong Number for 3 Digits

Approach:
1. Input a 3-digit number
2. Find each digit and calculate sum of cubes
3. Compare the sum with the original number

Time Complexity: O(1)
Space Complexity: O(1)
*/

// For any 3digit number check whether it is an Armstrong number or not.Armstrong number is a number that is equal to the sum of cubes of its digits.Eg: 371 is an armstrong number 
#include <iostream>
using namespace std;

int main (){
    int n , rem1, rem2, rem3 ,armstrong;
    cout<<"Enter a 3 digit number"<<endl;
    cin>>n;
    int fakeNum = n;
    rem1 = fakeNum % 10;
    fakeNum = fakeNum / 10;
    
    rem2 = fakeNum % 10;
    fakeNum = fakeNum / 10;

    rem3 = fakeNum % 10;

    armstrong = rem1*rem1*rem1 + rem2*rem2*rem2 + rem3*rem3*rem3;

    if(n == armstrong){
        cout<<" it is armstrong number" << endl;
    }else{
        cout<<" it is not armstrong number" << endl;
    }
     

    return 0;
}
