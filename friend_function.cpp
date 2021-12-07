
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

#include<iostream>
using namespace std;

class B;

class A
{
	public:
		void showB(B&);
		
};

class B
{
	private:
		int b;
	public:
		B(){ b=0; }
		friend void A::showB(B& x);
};

void A::showB(B& obj)
{
	cout<<"B::b "<<obj.b;
}

int main()
{
	A obj1;
	B obj2;
	obj1.showB(obj2);
}
