#include <iostream>
#include <math.h>
using namespace std;
bool prime(int);
int main() 
{
    int k;int num=1;
	// your code goes here
    for(int i=2;i<20;i++)
    {   k=1;
        if(prime(i))
        {
            while(pow(i,(k+1))<=20)
            {
                k++;
            }
            num=num*pow(i,k);
        }
    }
    cout<<num;
	return 0;
}


bool prime(int n)
{
	for(int i=2;i<n;i++)
	{
		if(n%i==0)
			return false;

	}
	return true;
}
