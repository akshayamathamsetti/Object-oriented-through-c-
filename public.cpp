#include<iostream>
using namespace std;
class student
{
public:
	int rollNo;
	string name;
	void display()
	{
		cout<<"Roll Number:"<<rollNo<<endl;
		cout<<"Name:"<<name<<endl;
	}
};
int main()
{
	student s;
	s.rollNo=101;
	s.name="Rahul";
	s.display();
}
