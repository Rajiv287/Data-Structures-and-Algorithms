// WAP to output and input of array
#include<iostream>
using namespace std;
void printmarks(int marks[],int n){
    int size = n;
    for(int i = 0; i<size;i++){
        cout<<marks[i]<<endl;
    }
}
void inputmarks(int marks[],int n){
   int size = n;
   for(int i = 0; i<size;i++){
    cout<<"enter marks["<<i<<"]:";
    cin>>marks[i];
   }
   printmarks(marks,n);
}
int main(){
    int marks[5]={1,2,3,4,5};
    int n = sizeof(marks)/sizeof(int);
    // printmarks(marks,n);

    int sizeOfArray;
    cout<<"enter the size of array";
    cin>>sizeOfArray;
    int newMarks[sizeOfArray];
    inputmarks(newMarks,sizeOfArray);

    return 0;
}