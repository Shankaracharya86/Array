#include<iostream>
using namespace std;
int main()
{
    int A[]={4,8,6,9,5,2,7};
    int n=7,max;
    max=A[0];
      
          for(int i=1;i<n;i++)
             {
                 if(A[i]>max)
                   { 
                       max=A[i];
                       
                   }
                   
             }cout<<"Max is:"<<max;
return 0;           
}