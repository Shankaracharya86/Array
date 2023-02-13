#include<iostream>
using namespace std;

template<class T>
T maxim(T x,T y)
{
    return x>y?x:y; //X>y?x:y it means x is greater than y return x otherwise or else return y
}
int main()
{    
    int c,d;
    cout<<maxim(10,5)<<endl;
    cout<<maxim(1.56,3.5)<<endl; //This is double data type i.e. decimal without writing float or f
    cout<<maxim(1.5f,6.8f)<<endl;
    return 0;
}