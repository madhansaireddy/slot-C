
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	int i,arr[50];
	for(i=0;i<3;i++){
		cout<<"Input number "<<i+1<<": ";
	    cin>>arr[i];
	}
	sort(arr,arr+3);
	cout<<"The largest among 3 is : "<<arr[2];
	return 0;
}