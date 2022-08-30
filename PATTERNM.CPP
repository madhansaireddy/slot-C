#include<iostream.h>
int main(){
    int n,i,j;
    cout<<"enter the number of rows";
    cin>>n;
    if(n>0){
      for(i=1;i<n+1;i++){
	cout<<endl;
	for(j=1;j<i+1;j++){
	   cout<<"* ";
	}
      }
    }
return 0;
}
