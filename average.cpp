#include<iostream>
using namespace std;
int main(){
	int n=0,pos[50],neg[50],i=0,j,k=0,sump,sumn;	
	while(n!=-1){
		cout<<"Input Number : ";
		cin>>n;
		if(n>0){
			pos[i]=n;
			i++;
	    }
		if(n<-1){
			neg[k]=n;
			k++;
		}	
	}
	for(j=0;j<i;j++){
		sump=sump+pos[j];
	}
	for(j=0;j<k;j++){
		sumn=sumn+neg[j];
	}
	cout<<"Average for Positive numbers : "<<sump/i;
	cout<<"\nAverage for Negative numbers : "<<sumn/k;
	return 0;
}