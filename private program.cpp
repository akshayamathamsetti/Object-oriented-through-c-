#include<iostream>
using namespace std;
class student
{
	private:
	   int marks;
	public:
	    void setmarks(int m)
	    {
	    	marks=m;
		}
		void display()
		{
		   cout<< "marks=" <<marks;
		}
};
int main()
{
	student s;
	s.setmarks(95);
	s.display();
	return 0;
}
