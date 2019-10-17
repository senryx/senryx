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
	if (a<b)
	{
	do
	{
		if (d%3==0)
		{
			cout<<d;
		}
		d++;
	}
	while (d<=b);
}
}
