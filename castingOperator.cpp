#include<iostream>
using namespace std;
class item
{
	int i;
	public:
		item(){
		}
		item(int x)
		{
			i=x;
		}
		item operator=(item i)
		{
			cout<<"Assignment called"<<endl;
			return i;
		}
		void display()
		{
			cout<<"item i= "<<i<<endl;
		}
};
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
		operator item()
		{
			item i(x+y);
			return i;
		}
};
int main()
{
	product p(5,2);
	item i=p;
	 //operator item()  and creat in product
	p.display();
	i.display();
	return 0;
}
