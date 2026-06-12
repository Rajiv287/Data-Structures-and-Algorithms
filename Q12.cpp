// WAP to find the Factorial of a number entered by the user.
#include<iostream>
using namespace std;
int main(){
    int n, fact = 1;
    cout<<"enter a number"<<endl;
    cin>>n;

    if (n < 0) {
        cout << "Factorial of negative numbers is not defined." << endl;
        return 0;
    }

    for(int i=1; i <= n; i++){
        fact*=i;
    }
 cout<<"factorial of "<<n <<" is "<<fact<<endl;
    return 0;
}