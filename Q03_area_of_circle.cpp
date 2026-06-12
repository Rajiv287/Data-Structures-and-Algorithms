/*
Question: Area of Circle

Approach:
1. Input radius of circle
2. Use formula PI * r * r
3. Print the area

Time Complexity: O(1)
Space Complexity: O(1)
*/

// WAP to calculate the area of circle
#include<iostream>
#define PI 3.14159
using namespace std;
int main(){
    int r;
    cout<<"enter the radius of circle =";
    cin>>r;
    cout<<"Area of circle = "<<PI*r*r; 
   

    return 0;
}
