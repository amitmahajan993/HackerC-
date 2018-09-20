#include<iostream> 
using namespace std; 

int main() 
{ 
	const int var = 10; 
	//const int var = 10; allows to change value even if variable is constant
	cout<<&var<<endl;
	int *ptr = (int*)&var; 
	cout<<var<<endl;
	*ptr = 12; 
	cout<<&ptr<<endl;
	cout<<var<<endl;
	cout<<*ptr; 
	return 0; 
}  
