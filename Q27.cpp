// WAP to print the factorial of a number n 
#include<iostream>
using namespace std;

// function to calculate factorial
int fact(int n){
    if(n < 0){
        return -1; // for invalid input
    }

    int factorial = 1;
    for(int i = 1; i <= n; i++){
        factorial *= i;
    }
    return factorial;
}

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int result = fact(n);

    if(result == -1){
        cout << "Factorial not defined for negative numbers";
    } else {
        cout << "Factorial of " << n << " is = " << result;
    }

    return 0;
}