#include<iostream>
using namespace std;

void swap(int x,int y)
{
    cout<<x<<" "<<y<<endl;
    int temp;
    temp=x;
    x=y;
    y=temp;
    cout<<"After swapping value is:"<<x<<" "<<y<<endl;
}
int main()
{
    int a=10,b=20;
    swap(a,b);
    cout<<a<<" "<<b;
    return  0;
}