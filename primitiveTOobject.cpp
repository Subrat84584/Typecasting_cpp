#include<iostream>
using namespace std;
class complex
{
	private:
		int real,img;
		public:
			void display()
			{
				cout<<"real="<<real<<"img="<<img;
			}
			complex(int x)
			{
				real=x;
				img=x;
			}
};
int main()
{
	int x=10;
	complex c1=x;
	c1.display();
	return 0;
	
}
