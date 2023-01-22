#include<iostream>
#include<stdlib.h>
using namespace std;

class MyArray
{
	int a[100];
	const int size=100;
   
   public:
  
   	void set(int b,int i)
   	{
   		if(i>size){
   			cout<<"out of bound"<<endl;
   			exit(0);
   		}
   		a[i]=b;
   	}

   	int get(int i)
   	{
   		if(i>size){
   			cout<<"out of bound"<<endl;
   			exit(0);
   		}
   		return a[i];
   	}

   	int operator[](int i)
   	{
   		return a[i];

   	}
 
};

int main()
{
  MyArray a;
  a.set(5,140);
  cout<<a.get(3)<<endl;
  cout<<a[3];
 return 0;

}