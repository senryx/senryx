//============================================================================
// Name        : M1.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int a,b,d;
	cout<<"a=";
	cin>>a;
	cout<<"b=";
	cin>>b;
	d=a;
	cout<<endl;
	while (d<=b)
	{
		if (d%3==0)
		{

			cout<<d;
		}
		d++;
	}

}
