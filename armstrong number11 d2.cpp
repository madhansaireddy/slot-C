#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int n,num,sum=0,power,rem,temp;
	cout<<"N value : ";
	cin>>n;
	cout<<"Enter the number : ";
	cin>>num;
	temp = num;
	while(num>0){
		rem = num%10;
		power = pow(rem,n);
		sum = sum+power;
		num = num/10;
	}
	cout<<"Result = "<<sum<<"\n";
	if(sum==temp){
		cout<<"\nYes, It's an Armstrong Number\n";
	}
	else{
		cout<<"\nNo, It's not an Armstrong Number\n";
	}
	return 0;
}