#include<iostream>
using namespace std;
int main()
{
	int i,j,k,r;
    cout<<"Enter the range : ";
    cin>>r;
    for(i=1;i<=r;i++){
    	for(j=0;j<=r-i;j++){
            cout<<" ";
        }
        for(k=0;k<i;k++){
            cout<<"*";
        }
        cout<<"\n";
    }		
 	return 0;
}
