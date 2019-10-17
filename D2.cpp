

#include <iostream>
using namespace std;

int main()
{
	int i;
	i=-1000;
do
	{
		if (((i/100)==(i%10))&&(((i/100)>0)||(i/100)<0))
		{
			cout << i <<endl;
		}
		i++;
	}
	while (i<1000);
}
