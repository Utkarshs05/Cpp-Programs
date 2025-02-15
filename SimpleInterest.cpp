#include<iostream>
using namespace std;
int main()
{
    float p,r,t,si;
    cout<<"Enter Principal: "<<endl;
    cin>>p;
    cout<<"Enter Rate: "<<endl;
    cin>>r;
    cout<<"Enter Time: "<<endl;
    cin>>t;
    si = (p*r*t)/100;
    cout<<"Simple Interest is: "<<endl;
    cout<<si;
    return 0;
}