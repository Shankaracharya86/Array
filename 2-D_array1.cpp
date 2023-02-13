#include<iostream>
using namespace std;
int main()
{
    int A[2][3];
    cout<<"Enter the elements of row and column"<<endl;
    for(auto& x:A)
    {
        for(auto& y:x)
        {
            cin>>y;
        }
    }
    for(auto& x:A)
    {
        for(auto& y:x)
        {
            cout<<y<<" ";
        }cout<<endl;
    }
    return 0;
}