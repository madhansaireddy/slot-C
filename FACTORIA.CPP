#include<iostream.h>
int main(){
   int n,fact,i;
   fact = 1;
   i=1;
   cout<<"enter the number";
   cin>>n;
   while(i<=n){
      fact = fact * i;
      i++;
      }
   cout<<"the factorial of the given number,"<<fact<<endl;
return 0;
}