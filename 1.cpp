#include<iostream>
using namespace std;

class Complex
{
	int real;
	int img;

public:

  friend istream & operator>>(istream &in, Complex &c)
	{
		in>>c.real>>c.img;
		return in; 
	}

  friend ostream& operator<<(ostream &os,Complex &c)
  {
  	os<<c.real<<" "<<c.img<<endl;
  	return os;
  }

};

int main(){
	Complex c1,c2;
	 cin>>c1;
	 cin>>c2;
	 cout<<c1;
	 cout<<c2;
	 return 0;
}