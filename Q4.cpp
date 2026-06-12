// WAP to get a number from the user and print whether it's positive,negative or zero
#include <iostream>
using namespace std;
int main(){
   int n;
   cout<<"enter a number\n";
   cin>>n;

   if(n>0){
    cout<<n<<" is positive\n";
   } else if(n<0){
    cout<<n<<" is negative\n";
   }else if (n==0){
    cout<<n<<" is equal to Zero\n";
   }else{
    cout<<"not a number\n";
   }

    return 0;
}