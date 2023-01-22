#include<iostream>
using namespace std;

class Marks
{
	int marks;
public:

 Marks(int x)
 {
 	marks=x;
 }

 Marks(){
 	marks=0;
 }
	void print()
	{
		 cout<<marks<<endl;
	}

  Marks* operator->()
  {
  	return this;
  }

};

int main()
{
	Marks m(5);
	m.print();
	m->print();
	return 0;

}