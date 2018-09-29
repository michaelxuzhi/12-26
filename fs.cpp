#include <iostream.h> 
class A 
{ 
	public:  
		A(); 
		A(int i,int j); 
		~A()
		{
			cout<<a<<"Donstructor.\n";
		}  
	void print(); 
	private:  
		int a,b; 
}; 
A::A() 
{
	cout<<"Default constructor.\n";
} 
	A::A(int i,int j) 
{ 
	cout<<"Constructor.\n";
} 
void main()
{
	A m,n(15,18);
}  
