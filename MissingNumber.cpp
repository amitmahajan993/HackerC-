#include<iostream>
using namespace std;


int getMissingNo (int a[], int n)
{
	int i, total;
	total = (n+1)*(n+2)/2; 
	for ( i = 0; i< n; i++)
	{
	total -= a[i];
	}
	return total;
}

/*program to test above function */
int main()
{
	int a[] = {1, 2, 4, 6, 3, 7, 8};
	int n = sizeof(a)/sizeof(a[0]); 
	int miss = getMissingNo(a,n);
	cout<<"Missing Number is :"<<miss<<endl;
	getchar();
}
