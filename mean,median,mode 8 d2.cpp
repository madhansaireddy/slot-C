#include<iostream>
using namespace std;
int main(){
	int n,arr[100],j,i,sum=0,mean,median,mode,n1;
	cout<<"Number of elements in array : ";
	cin>>n;
	for(i=0;i<n;i++){
		cout<<"Input number : ";
		cin>>arr[i];
		sum=sum+arr[i];
	}
	mean = sum/n;
	if(i%2==0){
		n1=n/2;
		median = (n1+(n1+1))/2;
	}
	else{
		median=(n+1)/2;
	}
	cout<<"\nMean : "<<mean;
	cout<<"\nMedian : "<<median<<"\n";
	for(j=0;j<i;j++){
		cout<<arr[j]<<" ";
	}
}