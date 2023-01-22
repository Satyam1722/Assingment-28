#include<iostream>
using namespace std;

class Cordinate
{
	int x,y,z;
public:

	
  friend istream & operator>>(istream &in,Cordinate &c)
	{
		in>>c.x>>c.y>>c.z;
		return in; 
	}

  friend ostream & operator<<(ostream &os,Cordinate &c)
  {
  	os<<c.x<<" "<<c.y<<" "<<c.z<<endl;
  	return os;
  }

  Cordinate operator,(Cordinate &c){
   Cordinate temp;
   temp.x=c.x;
   temp.y=c.y;
   temp.z=c.x;
   return temp;
  }
};

int main(){
	Cordinate c1,c2,c3;
	cin>>c1>>c2>>c3;
    c1=(c2,c3);
    cout<<c1<<c2<<c3;
}