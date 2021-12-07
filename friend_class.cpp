#include<iostream>
using namespace std;

class B;
class A
{
	int a;
	public:
		A(){ a = 0;}
		friend class B;
};

class B
{
	int b;
	public:
		B(){ b = 0; }
		void showA(A& obj)
		{
			cout<<"A::a "<<obj.a<<endl;
		}
};

int main()
{
	A obj1;
	B obj2;
	obj2.showA(obj1);
}
