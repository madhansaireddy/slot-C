#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	int n,rem,sum;
	cout<<"Enter the number : ";
	cin>>n;
	if(n>0){
	   while(n>0){
		rem = n%10;
		cout<<rem<<" ";
		n=n/10;
		sum=sum+rem;
	   }
	}
	else{
		cout<<"Invalid input";
	}
	cout<<"sum is "<<sum;
    return 0;
}