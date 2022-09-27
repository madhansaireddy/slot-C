#include<iostream>
using namespace std;
int main()
{
	int i,j,k,r;
    cout<<"Enter the range : ";
    cin>>r;
    for(i=1;i<=r;i++){
    	for(j=1;j<=i;j++){
            cout<<" "<<i;
        }
        cout<<"\n";
    }		
 	return 0;
}
