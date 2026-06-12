// WAP for binary to decimal
#include<iostream>
using namespace std;
void bintodecimal(int bin){
    int n = bin;
    int dec = 0;
    int pow=1;
    while(n>0){
        int lastdig = n%10;
        dec += lastdig*pow;
        pow = pow *2;
        n = n/10;
    }
cout<<dec<<endl;
}

int main(){
 bintodecimal(1011);

    return 0;
}
