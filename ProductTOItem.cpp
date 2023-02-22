#include<iostream>
using namespace std;
class product
{
	int x,y;
	public:
	   product(int r,int l)
		{
			x=r;
			y=l;
		}
		void display()
		{
			cout<<"x= "<<x<<"y= "<<y<<endl;
		}
		int getx()
		{
			return x;
		}
		int gety()
		{
			return y;
		}
};
class item
{
	int i;
	public:
		item(){
		}
		item(product p)
		{
			i=p.getx()+p.gety();
		}
		void display()
		{
			cout<<"i= "<<i;
		}
};
int main()
{
	product p(5,2);
	item i;
	i=p;
	p.display();
	i.display();
	return 0;
}
