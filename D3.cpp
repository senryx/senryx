
#include <iostream>
using namespace std;

int main()
{
	int i;
	for (i=-1000; i<=1000; i++)
	{
		if (((i/100)==(i%10))&&(((i/100)>0)||(i/100)<0))
		{
			cout << i <<endl;
		}
	}
}
