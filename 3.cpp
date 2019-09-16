#include <iostream>
using namespace std;
bool prime(long);

int main()
{
	long n,i;
	cout<<"input the number"<<endl;
	cin>>n;
	for(i=2;i<=n;i++)
	{
		if(prime(i))
			{
			if(n%i==0)
			{
				n=n/i;
			}
			else if(n==1)
				cout<<i;
			}
	}

}

bool prime(long n)
{
	for(long i=2;i<n;i++)
	{
		if(n%i==0)
			return false;

	}
	return true;
}
