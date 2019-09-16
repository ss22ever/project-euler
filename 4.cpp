#include <iostream>
#include <math.h>
using namespace std;
bool palin(int i); 
int main()
{
	int i,j,k;
	i=999;
	for(i=999;i>99;i--)
	{
		if(palin(i*i))
			{
				cout<<(i*i)<<endl<<i;
				return 0;
			}
		else if(palin(i*(i-1)))
			{
				cout<<(i*(i-1))<<endl<<i;
				return 0;
			}
					
	}

cout<<"sorry";
return 0;
}

/*bool palin(int i)
{
	int k;int n=10;int m=10;
	for(k=5;k>=1;k++)
	{
		while(k!=0)
		{
			n=n*10;
			k--;
		}

		while((6-k)!=0)
		{
			m=m*10;
			k--;
		}
		if(i%((6-k)*10)!=i/n)
		return false;
	}
	return true;
}*/

bool palin(int z)
{
	int m=0;int n;int k;
	n=z;
	for(int i=5;i>=0;i--)
	{	
		k=n%10;
		m=m+pow(10,i)*k;
		n=n/10;
	}
	if(m==z)
		return true;
	else 
		return false;
}
