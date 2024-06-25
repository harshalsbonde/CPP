// Dimond structure Problem
#include <iostream>
using namespace std;

class A
{
	public:
		A()
		{
			cout<<"\n Inside A"<<endl;
		}
};

class B : public A
{
	public:
		B()
		{
			cout<<"\n Inside B"<<endl;
		}
};

class C : public A
{
	public:
		C()
		{
			cout<<"\n Inside C"<<endl;
		}
};

class D : public B, public C
{
	public:
		D()
		{
			cout<<"\n Inside D"<<endl;
		}
};

int main()
{
	D *d = new D();
}

/////////////////////////////////////////////////////////////////////////////////////////////
/*Output

 Inside A

 Inside B

 Inside A

 Inside C

 Inside D
 */
 ///////////////////////////////////////////////////////////////////////////////////////////
 
 
