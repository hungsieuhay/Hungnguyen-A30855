#include <iostream>
#include <math.h>
using namespace std;
bool isprime (unsigned int N);
int main()
{
	int N;
	bool ketqua;
	cin>>N;
	ketqua = isprime(N);
	cout<<ketqua<<endl;	
	return 0;
}
bool isprime ( unsigned int N)
{
	for ( int i=2; i<= sqrt(N); i++)
	{
		if (N%i ==0)
			return false;
	}
	return true;
}