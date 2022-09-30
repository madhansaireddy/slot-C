#include<iostream>
using namespace std;
class room{
   public:
      int l;
      int b;

      int area(){
	 return 2*(l+b);
      }
      int volume(){
	 return l*b;
      }
};
int main(){
   room r;
   cin>>r.l;
   cin>>r.b;
   cout<<"Area :"<<r.area()<<endl;
   cout<<"Volume :"<<r.volume()<<endl;
   return 0;
}