#include<iostream>
using namespace std;
class Rupee
{
	private:
		int r;
		public:
			Rupee(int x)
			{
				r=x;
			}
			int getD()
			{
				return r;
			}
};
class Dollar
{
	int d;
	public:
		Dollar(Rupee r)
		{
			d=r.getD();
		}
		friend void operator<<(ostream &os,Dollar d1)
		{
			os<<d1.d;
		}
};
int main()
{
	Rupee r=23;
	Dollar d=(Dollar)r;
	cout<<"after conversion"<<d;
	return 0;
}
