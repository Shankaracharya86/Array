#include<iostream>
using namespace std;
int main()
{
    int r1,c1,r2,c2,j=0,sum=0,A[10][10],B[10][10],C[10][10];

    cout<<"Enter row and column of matrix 1:";cin>>r1>>c1;
    cout<<"Enter row and column of matrix 2:";cin>>r2>>c2;
    if(r1!=r2 && c1!=c2)
    {
        cout<<"Adiition can not done due to invalid rows or column";
        return 0;
    }
    else
    {
        for(int i=0;i<r1;i++)
        {
           for(int j=0;j<c1;j++)
           {
              cout<<"Enter the elements of matrix 1:";
              cin>>A[i][j];
           }
        }
        for(int i=0;i<r1;i++)
        {
           for(int j=0;j<c1;j++)
           {
               cout<<"Enter the elements of matrix 2:";
               cin>>B[i][j];
           }
        }
         for(int i=0;i<r1;i++)
        {
           for(int j=0;j<c1;j++)
           {
               C[i][j]=A[i][j]+B[i][j];
               sum=0;
           }
        }
    }
    cout<<"The resultant matrix is:"<<endl;
    for(int i=0;i<r1;i++)
        {
           for(int j=0;j<c1;j++)
           {
              cout<<C[i][j]<<" "; 
           }
           cout<<endl;
        }
        return 0;
}