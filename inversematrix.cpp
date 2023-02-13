#include<iostream>
using namespace std;
int main()
{
    int r,c,A[10][10],B[10][10],detA=0,i,j;

    cout<<"Enter row and column of matix: ";cin>>r>>c;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        { 
           cout<<"Enter A"<<i<<j<<" = ";
           cin>>A[i][j];
        }
    }

    cout<<"The matrix is:"<<endl;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        { 
            cout<<A[i][j]<<"    ";
        }
        cout<<endl;
    }
//**************************************************completed******************************************
    for(i=0;i<r;i++)
    {
        detA+=A[0][i] * ((A[1][(i+1)%3] * A[2][(i+2)%3]) - (A[1][(i+2)%3] * A[2][(i+1)%3]));
    }
    cout<<"Determinant of A is: "<<detA<<endl;
//**************************************************determinaant completed*****************************
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
           B[i][j]=A[(i+1)%3][(j+1)%3] * A[(i+2)%3][(j+2)%3] - A[(i+2)%3][(j+1)%3] * A[(i+1)%3][(j+2)%3];
        }
    }
    cout<<"The inverse of matrix is:"<<endl;
    for(i=0;i<r;i++)
    {
       for(j=0;j<c;j++)
       {
           cout<<B[i][j]<<"    ";
       }
       cout<<endl;
    }

    return 0;
}