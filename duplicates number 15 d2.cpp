#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	int r,n,arr[50],i,j;
	cout<<"Enter the range : ";
	cin>>r;
	for(i=0;i<r;i++){
		cout<<"Insert element : ";
		cin>>n;
		arr[i]=n;
    }
    j=0;
    sort(arr,arr+i);
    while(j<i){
    	if(arr[j]!=arr[j-1]){
    		cout<<arr[j]<<" ";
		}
    	j++;
	}
    return 0;
}