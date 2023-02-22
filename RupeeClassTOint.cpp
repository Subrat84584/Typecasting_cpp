#include<iostream>
using namespace std;
class Rupee
{
	private:
		int dollar;
		public:
			Rupee(int x)
			{
				dollar=x;
			}
			void display()
			{
				cout<<"Rupee is"<<dollar<<endl;
			}
			operator int()
			{
				return dollar;
			}
};
int main()
{
	Rupee R1(5);
	R1.display();
	int x;
	x=R1;
	cout<<"After conversion"<<x;
	return 0;
}
