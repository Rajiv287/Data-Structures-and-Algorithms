/*
Question: Linear Search

Approach:
1. Traverse array from start to end
2. Compare each element with key
3. Print index if key is found

Time Complexity: O(n)
Space Complexity: O(1)
*/

// WAP for linear search 
#include<iostream>
using namespace std;
void linearsearch(int array[],int n, int key ){
    for(int i = 0; i<n;i++){
       if(array[i]==key){
        cout<<"key is found on the index :"<<i<<endl;
        return ;
       }
    }
   cout<<"key not found"<<endl;
}
int main(){
    int array[]={1,2,3,4,5,6};
    int n = sizeof(array)/sizeof(int);
    int key = 7;
    linearsearch(array,n,key);
    return 0;
}
