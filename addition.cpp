#include<iostream>
using namespace std;
int add(int x,int y)
{
    int z;
    z=x+y;
    return z;
}

int main()
{
    int a,b,c;
    cout<<"Enter a:";cin>>a;
    cout<<"Enter b:";cin>>b;

    c=add(a,b);
    cout<<"The sum is "<<c<<endl;
    return 0;   
}