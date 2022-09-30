#include<iostream>
using namespace std;
int main(){
	int s,end,i,fact=0,j,arr[999],index=0;
	cout<<"Starting Point : ";
	cin>>s;
	cout<<"Ending Point : ";
	cin>>end;
	cout<<"The composite numbers between "<<s<<" and "<<end<<" are :\n";
	cout<<"[ ";
	for (i=s;i<=end;i++){
		for(j=2;j<i;j++){
			if(i%j==0){
				arr[index]=i;
			}
		}
		if(arr[index]==i){
			index++;
		}
	}
	for(i=0;i<index;i++){
		cout<<arr[i]<<" ";
	}
	cout<<"]";
	return 0;
}