#include<iostream>
using namespace std;

int maxim(int x,int y,int z)
{
    if(x>y && y>z)
    return x;
    else if(y>z)
    return y;
    else
    return z;
}
int main()
{
    int a,b,c,d;
    cout<<"Enter a:";cin>>a;
    cout<<"Enter b:";cin>>b;
    cout<<"Enter c:";cin>>c;

    d=maxim(a,b,c);
    cout<<"The maximum  of "<<a<<" "<<b<<" "<<c<<" is "<<d<<endl;
    return 0;   
}