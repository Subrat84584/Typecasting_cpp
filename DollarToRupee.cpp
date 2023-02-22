#include<iostream>
using namespace std;
class Dollar
{
	int d;
	public:
	Dollar()
	{
		
	}
	Dollar(int x)
	{
		d=x;
	}
	int getD()
	{
		return d;
	}
	
};
class Rupee
{
	int R;
	public:
		Rupee(Dollar d1)
		{
			R=d1.getD();
		}
	 
		friend void operator<<(ostream &os,Rupee r)
		{
			os<<r.R;
		}
};
int main()
{
	Dollar d=23;
	Rupee r=(Rupee)d;
	cout<<"Dollar to Ruppee"<<r;
	return 0;
}
