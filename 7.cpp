#include<iostream>
using namespace std;

class Integer
{
	int x;
	public:

	  friend istream & operator>>(istream &in, Integer &c)
	{
		in>>c.x;
		return in; 
	}

  friend ostream& operator<<(ostream &os,Integer &c)
  {
  	os<<c.x<<endl;
  	return os;
  }

  bool operator!()
  {
  	return !x;
  }

  

};

int main(){
	Integer c;
	cin>>c;
	cout<<!c;
	return 0;
}