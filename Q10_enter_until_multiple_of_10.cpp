// WAP where user can keep entering numbers till they enter a multiple of 10
#include<iostream>
using namespace std;
int main (){
    int n;
    cout<<"enter a number"<<endl;
    cin>>n;

    while(n%10!=0){
        cout<<"enter another number"<<endl;
        cin>>n;
        cout<<"it is multiple of 10";
    }
cout<<"it is multiple of 10";
    return 0;
}