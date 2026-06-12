/*
Question: Largest and Smallest in Array

Approach:
1. Traverse the array
2. Compare each element with current largest and smallest
3. Print final largest and smallest values

Time Complexity: O(n)
Space Complexity: O(1)
*/

// WAP to find largest value in arrray and for smallest also
#include<iostream>
using namespace std;
void maximum(int array[],int n){
    int max = array[0];
    for(int i=0; i < n;i++){
        if(array[i]>max){
            max= array[i];
        }
    }
    cout<<"maximum of this arry is :"<<max<<endl;
}
void minimum(int array[],int n){
    int min = array[0];
    for(int i = 0; i<n;i++){
        if(array[i]<min){
            min=array[i];
        }
    }
    cout<<"minimum of this array is :"<<min<<endl;
}
int main(){
int array[]={-345,-1000,3,4,5,234};
int n = sizeof(array)/sizeof(int);
maximum(array,n);
minimum(array, n);

    return 0;
}
