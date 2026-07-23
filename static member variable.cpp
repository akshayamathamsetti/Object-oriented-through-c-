#include<iostream>
using namespace std;
class Robo
{
	int n;
	static int count;
	public:
		void getData(int a)
		{
			n=a;
			count=count+1;
		}
		void display()
		
		{
			cout<<"count="<<count;
		}
};
int Robo::count;
int main()
{
	Robo s1,s2;
	s1.getData(10);
	s2.getData(20);
	s1.display();
	s2.display();
	return 0;
}

