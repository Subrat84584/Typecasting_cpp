#include<iostream>
using namespace std;
class time
{
	int hour;
	int min;
	public:
		time()
		{
			
		}
		time(int duration)
		{
			hour=duration/3600;
			min=duration%3600;
		}
		void display()
		{
			cout<<"Hour="<<hour<<"min="<<min<<endl;
		}
		
};
int main()
{
	int duration=4000;
	time t=duration;
	t.display();
	return 0;
}
