/*
Question: Reverse an Array

Approach:
1. Keep one pointer at start and one at end
2. Swap start and end elements
3. Move pointers toward center until array is reversed

Time Complexity: O(n)
Space Complexity: O(1)
*/

// WAP for reverse an array by using extra space & with using extra space 


// By using extra space
// #include<iostream>
// using namespace std;

// void reverseArray(int array[],int n){
// int reverse[n];
// for(int i = 0;i<n;i++){
//     reverse[i]=array[n-1-i];
// }
// for(int i=0;i<n;i++){
//     array[i]=reverse[i];
// }
// }

// int main(){
//     int array[]={1,2,3,4,5,6};
//     int n= sizeof(array)/sizeof(int);
//     reverseArray(array,n);
//     cout<<"the reverse of this array is : ";
//     for(int i =0;i<n;i++){
//         cout<<array[i]<<" ";
//     }

//     return 0;
// }

// By without using extra space 
#include<iostream>
using namespace std;

void reverseArray(int array[], int n){
    int start = 0;
    int end = n - 1;

    while(start < end){

        int temp = array[start];
        array[start] = array[end];
        array[end] = temp;

        start++;
        end--;
    }
}

int main(){
    int array[] = {1,2,3,4,5,6};
    int n = sizeof(array)/sizeof(int);

    reverseArray(array, n);

    for(int i = 0; i < n; i++){
        cout << array[i] << " ";
    }

    return 0;
}
