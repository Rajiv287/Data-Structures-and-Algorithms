// WAP to find number of subarrays and all subarrays 
#include<iostream>
using namespace std;
void printsubarray(int array[], int n){
    int count = 0;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            for(int k=i;k<=j;k++){
                cout<<" "<<array[k];
            }
            cout<<",";
            count++;
        }
        cout<<endl;
    }
    cout<<"total number of subarray = "<<count;

}
int main(){
    int array[]={1,2,3,4,5};
    int n=sizeof(array)/sizeof(int);
    printsubarray(array,n);

    return 0;
}