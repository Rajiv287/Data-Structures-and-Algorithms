#include<iostream>
#include<cstring>
#include<string>
using namespace std;
void touppercase(char ch[], int n){
    for(int i=0;i<n;i++){
       if(ch[i] >= 'a' && ch[i] <= 'z') {
    ch[i] = ch[i] - 32;
}
    }
}
int main(){
    char ch[50]="RAjeev";
    int n = strlen(ch);
    touppercase(ch,n);

    cout<<ch;

    return 0;
}