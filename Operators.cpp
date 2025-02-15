#include<iostream>
using namespace std;
int main()
{
    float x,y;
    cout<<"Enter Value of x: "<<endl;
    cin>>x;
    cout<<"Enter Value of y: "<<endl;
    cin>>y;
    cout<<"Sum is: "<<x+y<<endl;
    cout<<"Difference is: "<<x-y<<endl;
    cout<<"Product is: "<<x*y<<endl;
    cout<<"Division is: "<<x/y<<endl;
    cout<<"Modulus is: "<<(int)x%(int)y<<endl;
    return 0;
}