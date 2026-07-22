#include<iostream>
using namespace std;
class student
{
	protected:
		int marks;
};
class Result:public student
{
	public:
		void setMarks()
		{
			marks=90;
		}
		void display()
		{
			cout<<"Marks="<<marks;
		}
};
int main()
{
	Result r;
	 r.setMarks();
	 r.display();
	 return 0;
	 }
