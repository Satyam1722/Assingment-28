#include<iostream>
using namespace std;

class Distance 
{
	int feet;
	int inch;

public:

  Distance operator()(int a,int b,int c)
  {
  	Distance temp;
  	temp.feet=a+c+5;
  	temp.inch=a+b+15;
  	return temp;
  }

  void set(int a,int b)
  {
  	feet=a;
  	inch=b;
  }

  void show()
  {
  	cout<<"feet "<<feet<<" inch "<<inch<<endl;
  }

};

int main()
{
	Distance d1,d2;
	d1.set(5,10);
	d2=d1(1,2,3);
	d2.show();
	return 0;
}

