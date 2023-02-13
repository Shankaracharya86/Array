#include<iostream>
using namespace std;

int sum(int x,int y)
{  
    return x+y;
}
int sum(int x,int y,int z)
{
    return x+y+z;
}
float sum(float x,float y)
{
    return x+y;
}
float sum(float x,float y,float z)
{
    return x+y+z;
}
int main()
{  
    int a,b,c;
    float d,e,f;

    cout<<"Enter integer a: ";cin>>a;
    cout<<"Enter integer b: ";cin>>b;
    cout<<"Enter integer c: ";cin>>c;
    cout<<"Enter decimal d: ";cin>>d;
    cout<<"Enter decimal e: ";cin>>e;
    cout<<"Enter decimal f: ";cin>>f;

    cout<<"sum of "<<a<<" and "<<b<<" is:"<<sum(a,b)<<endl;
    cout<<"sum of "<<a<<","<<b<<" and "<<c<<" is:"<<sum(a,b,c)<<endl;
    cout<<"sum of "<<d<<" and "<<e<<" is:"<<sum(d,e)<<endl;
    cout<<"sum of "<<d<<","<<e<<" and "<<f<<" is:"<<sum(d,e,f)<<endl;
    return 0;
}