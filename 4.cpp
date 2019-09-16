#include <iostream>
using namespace std;
bool palin(int i); 
int main()
{
	int i,j,k;
	for(i=(999*999);i>(101*101);i--)
	{
		if(palin(i))
			cout<<i;
	}


return 0;
}

bool palin(int i)
{
	int k;
	for(k=5;k>=1;k++)
	{
		if(i%((6-k)*10)!=i/(k*10))
		return false;
	}
	return true;
}
