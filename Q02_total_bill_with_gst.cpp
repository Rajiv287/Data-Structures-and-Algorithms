/*
Question: Total Bill With GST

Approach:
1. Input price of pencil, pen, and eraser
2. Add all prices to get total bill
3. Add 18% GST and print final bill

Time Complexity: O(1)
Space Complexity: O(1)
*/

// Enter cost of 3items from the user(usingfloatdatatype)- a pencil,a pen and an eraser.You have to out put the total cost of the items back to the user as their bill , You can also try adding 18% GST tax to the items in the bill as anadvanced problem.
#include<iostream>
using namespace std;
int main (){
   float pencil,pen,eraser;
   cout<<"enter the price the pencil , pen , eraser"<<endl;
   cin>>pencil>>pen>>eraser;
   float total = pencil + pen + eraser;
   cout<<"your total bill is = "<< total<<endl ;
   cout<<"And your bill with gst is equal to "<< ((total*18)/100)+total;

    return 0;
}
