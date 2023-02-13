#include<iostream>
using namespace std;

int search(int A[],int n,int key)
{  
    for(int i=0;i<n;i++)
       {
            if(key==A[i])
            {
                cout<<"Desired result is at index:"<<i;
                return 0;       //To stop the loop and give the desired result
            }
       }
       cout<<"Not Found"<<endl;
       return 0;
   
}
int main()
{   
    int A[100],k,n=5;

    cout<<"Enter your list of numbers"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }
    cout<<"Enter number you want to search in your list:";
    cin>>k;
    search(A,n,k);
    return 0;
}