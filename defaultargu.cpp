#include<iostream>
using namespace std;

int maxim(int x,int y,int z=0) //we default all the parameters i.e. int x=0,int y=0,int z=0 but in a order.....
                               //From right (i.e. int z) to left without skipping the next parameter (i.e. int y)....
{
    return x>y && y>z?x:y>z?y:z;
}
int main()
{
    cout<<maxim(10,12)<<endl;
    cout<<maxim(10,34,0)<<endl;
    cout<<maxim(12,14,8)<<endl;
    return 0;
}