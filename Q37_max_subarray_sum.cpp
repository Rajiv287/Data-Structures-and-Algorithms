/*
Question: Max Subarray Sum

Approach:
1. Choose starting index
2. Choose ending index
3. Traverse from start to end for each subarray

Time Complexity: O(n^3)
Space Complexity: O(1)
*/

// WAP max subarray sum 
#include<iostream>
using namespace std;
void maxsubarraysum(int array[], int n){
    for(int i = 0;i<n;i++){
        for(int j = i;j<n;j++){
            for(int k = i;k<=j;k++){
                 cout<<array[k];
            }
            cout<<","<<" ";
            cout<<endl;
        }
    }
}

int main(){
    int array[]={2,-3,6,-5,4,2};
    int n = sizeof(array)/sizeof(int);
    maxsubarraysum(array,n);
    return 0;
}
