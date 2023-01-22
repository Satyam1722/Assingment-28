#include<iostream>
using namespace std;

class Integer
{
	int x;
public:
    operator int()
    {
    	return x;
    }

    void set(int x){
    	this->x=x;
    }

    int  get(){
    	return x;
    }

};

int main()
{
	int a;
	Integer i;
	i.set(56);
	a=i;
	cout<<a;

}