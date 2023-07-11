#include<iostream>
using namespace std;
int main()
{
    int* p=NULL;
    p=new(nothrow)int;
    if(!p)
    cout<<"allocation failed"<<endl;
    else{
        *p=29;
        cout<<"value of p:"<<*p<<endl;
    }
    float *r=new float(75.25);
    cout<<"value of r:"<<*r<<endl;
    int n=5;
    int *q=new(nothrow) int[n];
    if(!q)
    cout<<"allocation failed"<<endl;
    else{
        for(int i=0;i<n;i++)
        q[i]=i+1;
        cout<<"value store in block of memory:";
        for(int i=0;i<n;i++)
        cout<<q[i]<<" ";
    }
    delete p;
    delete r;
    delete[] q;
    return 0;
}