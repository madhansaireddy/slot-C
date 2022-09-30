#include<iostream>
using namespace std;
int main(){
	int n,num,rem,sum=0;
	cout<<"Enter the number : ";
	cin>>num;
	while(num>0){
		rem = num%10;
		sum = sum + rem;
		num = num/10;
		if(sum>9){
			num=sum;
			sum=0;
			rem = num%10;
			sum = sum + rem;
			num = num/10;
			if(sum>9){
				num=sum;
				sum=0;
				rem = num%10;
				sum = sum + rem;
				num = num/10;				
			}
		}
	}
	cout<<"Sum is "<<sum;
	return 0;
}