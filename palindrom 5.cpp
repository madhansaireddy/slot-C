#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,arr[50],rem,i=0,j,asc[50],temp,fact;
	cout<<"Enter the number :";
	cin>>n;
	if(n>0){
		cout<<"Reversed number : ";
	    while(n>0){
	    	rem = n%10;
	    	arr[i]=rem;
	    	cout<<rem;
	    	n = n/10;
	    	i++;
	    }
	    sort(arr,arr+n);
	    j=i-1;
	    temp = j;
	    cout<<"\n";
	    i=0;
	    while(j>=0){
	    	asc[i]=arr[j];
	    	j--;
	    	i++;
		}
		i=0;
		cout<<"\n";
		while(temp>=0){
			if(arr[i]==asc[i]){
				fact = 1;
			}
			if(arr[i]!=asc[i]){
				fact = 0;
			}
			temp--;
		}
		if(fact==1){
			cout<<"It's a Palindrome";
		}
		else{
			cout<<"It's not Palindrome";
		}
	}
	return 0;
}
