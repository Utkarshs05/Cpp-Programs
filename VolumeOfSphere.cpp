#include<iostream>
using namespace std;
int main()
{
	float r,v;
	cout<<"Enter Radius: "<<endl;
	cin>>r;
	v = (4/3)*(3.1415)*r*r*r;
	cout<<"Volume of Sphere is: "<<endl;
	cout<<v;
	return 0;
}
