#include<iostream.h>
int main(){
    int n,a;
    cout<<"enter the number";
    cin>>n;
    cout<<"the reversed number is,";
    do{
      a=n%10;
      cout<<a;
      n=n%10;
      }
    while(n>0);
return 0;
}