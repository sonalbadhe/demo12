#include<iostream>
using namespace std;

int sum(int,int);
int sum(int,int,int);
double sum(double,double);

int main()
{
cout<<"sum of 2 integres:"<<sum(2,3)<<endl;
cout<<"sum of 2 decimal nos:"<<sum(8.9,6.7)<<"\n";
cout<<"sum of 3 integres is:"<<sum(4,5,6)<<"\n";
return 0;
}
int sum(int a,int b) 
	{ 
		return(a+b);
	}
int sum(int a1,int a2,int a3)
	{
		return(a1+a2+a3);
	}
double sum(double x,double y)
	{
	return(x+y);
	}