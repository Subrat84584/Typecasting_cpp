#include<iostream>
using namespace std;
class Dollar
{
	private:
		int dollar;
		public:
			Dollar(int x)
			{
				dollar=x;
			}
			friend void operator<<(ostream &os,Dollar d)
			{
				os<<"after conversion"<<d.dollar;
			}
			
};
int main()
{
	int x=10;
	Dollar d1=x;
	cout<<d1;
	return 0;
}
