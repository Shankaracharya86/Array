#include<iostream>
using namespace std;
int main()
{
    int n;
    float sum=0.0,average;
    cout<<"Enter number of elements:";
    cin>>n;

    float A[100];

    for(int i=0;i<n;i++)
    { 
        cout<<"Enter number:";
        cin>>A[i];
        sum=sum+A[i];
    }
    cout<<"sum is:"<<sum<<endl;
    average=sum/n;
    cout<<"average:"<<average;
    
return 0;
}