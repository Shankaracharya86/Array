#include<iostream>
using namespace std;
int main()
{
    int A[15];
    int l=0,h=14,key,mid;
    cout<<"Enter numbers:";
       for(int n=0;n<=14;n++)
         {
             cin>>A[n];
         }
      cout<<"Enter key:";cin>>key;
               
               while(l<=h)
                  {  mid=(l+h)/2;
                      if(key==A[mid])
                       { 
                          cout<<"Found at:"<<mid;
                          return 0;
                       }
                       else if(key>A[mid])
                       {
                           l=mid+1;
                       }
                       else
                       {
                           h=mid-1;
                       }
                  }cout<<"Not found";
return 0;
}