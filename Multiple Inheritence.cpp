#include<iostream>
using namespace std;
class employee
{
	public:
		int empname[10];
		int empid;
		int empaddress,mailadress,mobilenum;
		double basic;
		void getdata()
		{
			cout<<"enter the employee name"<<endl;
			cin>>empname;
			cout<<"enter the emp id";
			cin>>emppid;
			cout<<"enter the basic salary";
			cin>>basic;
			
		}
};
class calculate
{
	public:
	int it=100;
	double da,hra,pf,gs,ns;
	void cal(int b)
	{
		da=0.7*b;
		hra=0.3*b;
		pf=0.1*b;gs=b+da+hra;
		ns=b-pf-it;
	}
};
class display:public employeee,public calculate
{
	public:
		void priint()
		{
			cout<<"employe name"<<empname<<endl;
			cout<<"employe id"<<empid<<endl;
			cout<<"basic salary"<<basic<<endl;
			calc(basic);
		}
	};
	void main()
	
	{
		display emp;
		emp.getdata();
		emp.print();
}
