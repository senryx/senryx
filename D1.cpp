//============================================================================
// Name        : D1.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main()
{
	int i;
	i=-1000;
	while (i<1000)
	{
		if (((i/100)==(i%10))&&(((i/100)>0)||(i/100)<0))
		{
			cout << i <<endl;
			i++;
		}
		else
			i++;
	}
}
