#include<iostream>
using namespace std;
int main(){
	int n,i,sum=0;
	cout<<"Enter the number : ";
	cin>>n;
	if(n>0){
	cout<<"Divisors are :";
	for(i=1;i<n;i++){
		if(n%i==0){
			cout<<i<<" ";
			sum = sum + i;
		}
	}
	cout<<"\nSum of divisors is : "<<sum<<"\n";
	if(sum==n){
		cout<<"So,"<<n<<" is a Perfect Number!";
	}
	else{
		cout<<"So,"<<n<<" is not a Perfect Number..";
	}
    }
    else{
    	cout<<"Enter valid number";
	}
	return 0;
}