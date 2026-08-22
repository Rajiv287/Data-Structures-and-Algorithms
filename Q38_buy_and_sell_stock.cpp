// WAP to right time to buy and sell stock 
#include<iostream>
#include<climits>
using namespace std;
void buyandsellstock(int array[],int n){

    int bestbuy[100000];
    bestbuy[0]=array[0];
    for(int i = 1;i<n;i++){
    bestbuy[i]=min(bestbuy[i-1],array[i-1]);
    }
    int maxprofit = 0;
    for(int i = 0;i<n;i++){
        int profit=array[i]-bestbuy[i];
        maxprofit = max(profit,maxprofit);
    }
cout<<maxprofit;
}
int main(){
   int prices[]={2,6,7,4,3,2};
   int n=sizeof(prices)/sizeof(int);

   buyandsellstock(prices,n);

    return 0;
}