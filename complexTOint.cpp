#include<iostream>
using namespace std;
class complex
{
	private:
		int real,img;
		public:
			complex(int x,int y)
			{
				real=x;
				img=y;
			}
			operator int()
			{
				return (real+img);
			}
};
int main()
{
	int x;
	complex c1(5,2);
	cout<<int(c1);  //cout<<(int)c1; //cout<<c1;
	return 0;
	
}
