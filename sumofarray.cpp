#include<iostream>
using namespace std;
int main()
{
    int A[]={2,5,8,7,6,3,4};
    int n=7,sum=0;

        for(int i=0;i<n;i++)
           {
               sum+=A[i];
           }
           cout<<"sum is:"<<sum;
return 0;
}