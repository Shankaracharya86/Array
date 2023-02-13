#include<iostream>
using namespace std;
int main()
{
    int i,j,k,r1,c1,A[10][10];
    cout<<"Enter row and column of matrix 1:";cin>>r1>>c1;
    cout<<"Enter the elements of matrix 1:";
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            cin>>A[i][j];
        }
    } 
    int r2,c2,B[10][10];
    cout<<"Enter row and column of matrix 2:";cin>>r2>>c2;
   
    if(r1!=c2)
    {
        cout<<"Multiplication can not be done";
        return 0;
    }
    else
    {
        cout<<"Enter the elements of matrix 2:";
        for(i=0;i<r2;i++)
        {
           for(j=0;j<c2;j++)
           {
              cin>>B[i][j];
           }
        }
    }  
    int C[10][10],sum=0;
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c2;j++)
        {
            for(k=0;k<r2;k++)
            {
                sum+=A[i][k]*B[k][j];
            }
            C[i][j]=sum;
            sum=0;
        }
    }

    cout<<"The resultant matrix is:"<<endl;
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c2;j++)
        {
           cout<<C[i][j]<<" ";
        }
        cout<<endl;
    }
return 0;        
}