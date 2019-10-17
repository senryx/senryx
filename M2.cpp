#include <iostream>
using namespace std;

int main() {
	int a,b,d;
	cout<<"a=";
	cin>>a;
	cout<<"b=";
	cin>>b;
	cout<<endl;
	for (d=a;d<=b;d++)
	{
		if (d%3==0)
			cout<<d;
	}
}
