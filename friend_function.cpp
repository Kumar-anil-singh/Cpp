#include<iostream>
using namespace std;
//class Base
//{
//	private:
//		int a,b;
//	public:
//		Base(int n1, int n2):a(n1),b(n2){}
//		friend void add(Base &b);
//};
//
//void add(Base &b)
//{
//	cout<<"a+b = "<<b.a + b.b; 
//}
//
//
//int main()
//{
//	Base obj(10,5);
//	add(obj);
//}
class B;
class A
{
	private:
		int a;
	public:
		A(int n=0):a(n){}
		friend void max(A, B);
};

class B
{
	private:
		int b;
	public:
		B(int n=0):b(n){}
		friend void max(A, B);
};
void max(A obj1, B obj2)
{
	if(obj1.a > obj2.b)
	{
		cout<<"a is "<<obj1.a<<endl;
	}
	else
	{
		cout<<"b is "<<obj2.b<<endl;
	}
}

int main()
{
	A obj1(10);
	B obj2(5);
	max(obj1, obj2);
}
