// WAP to print the digit of a given number in reverse using while loop
#include<iostream>
using namespace std;
int main(){
    int n,temp,rem;
    cout<<"enter a number"<<endl;
    cin>>n;
    temp = n;
    
    while(temp != 0){
    rem = temp % 10;
    temp = temp / 10;
    cout<<rem<<",";
    }

    return 0;
}