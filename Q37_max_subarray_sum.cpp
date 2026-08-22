/*
Question: Max Subarray Sum

Approach:
1. Choose starting index
2. Choose ending index
3. Traverse from start to end for each subarray

Time Complexity: O(n^3)
Space Complexity: O(1)
*/

// using brute force approach
// #include<iostream>
// #include <climits>
// using namespace std;
// int result=INT_MIN;
// void arraymaxsum(int array[],int n){
//     for(int i = 0; i < n;i++){
//         for(int j = i; j < n; j++){
//             int sum = 0;
//             for(int k=i;k<=j;k++){
//                 sum = sum + array[k];
//             }
//             result= max(sum,result);
//         }
//     }
//     cout<<result;
// }

// int main(){
//     int array[]={1,2,3,4,5};
//     int n = sizeof(array)/sizeof(int);
//     arraymaxsum(array,n);
//     return 0;
// }


// using optimized solution 
// #include<iostream>
// #include<climits>
// using namespace std;
// void maxsubarraysum(int array[], int n){
//     int maxsum = INT_MIN;
//     for(int i=0;i<n;i++){
//         int sum = 0;
//         for(int j=i;j<n;j++){
//               sum = sum + array[j];
//               maxsum=max(sum,maxsum);
//         }
//     }
//     cout<<maxsum;
// }

// int main(){
//     int array[]={-2,-3,-1,-5};
//     int n = sizeof(array)/sizeof(int);
    
//     maxsubarraysum(array,n);

//     return 0;
// }

// using kadane's approach 
#include<iostream>
#include<climits>
using namespace std;
void maxsubarraysum(int array[],int n){
    int maxsum=INT_MIN;
    int currentsum = 0;
    for(int i = 0;i<n;i++){
        currentsum+=array[i];
        maxsum=max(maxsum,currentsum);
        if(currentsum<0){
            currentsum=0;
        }
    }
    cout<<maxsum;
}

int main(){
   int array[]={-2,-3,-1,-5};
   int n=sizeof(array)/sizeof(int);
   maxsubarraysum(array,n);

    return 0;
}