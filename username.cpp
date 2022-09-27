#include <iostream>
#include <string.h>
using namespace std;
int main(){
	string s,r;
	cout<<"Enter the username : ";
	cin>>s;
	cout<<"Re-enter the username : ";
	cin>>r;
	if(s==r)
	cout<<"Valid username";
	else
	cout<<"Invalid username..";
}
