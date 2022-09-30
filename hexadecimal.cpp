#include<iostream>
using namespace std;
int main(){
    int j,n,rem,i=0,quo,c=0;
    int array[10];
    cout<<"Enter the decimal: ";
    cin>>n;
    while(n!=0){
       rem = n%16;
       array[i]=rem;
       i++;
       quo = n/16;
       c++;
       n = quo;
    }
    for(i=c-1;i>=0;i--){
     if(array[i]>9){
       if(array[i]==10){
	  cout<<"A";
       }
       if(array[i]==11){
	  cout<<"B";
       }
       if(array[i]==12){
	  cout<<"C";
       }
       if(array[i]==13){
	  cout<<"D";
       }
       if(array[i]==14){
	  cout<<"E";
       }
       if(array[i]==15){
	  cout<<"F";
       }
     }
     else{
	  cout<<array[i];
     }
    }
return 0;
}