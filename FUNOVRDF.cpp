#include<iostream>
using namespace std;
int sum(int x,int y=0)
{
    return x+y;
}
int sum(float a,double b,float c=0)
{
    return a+b+c;
}
int main()
{
    int a,b;
    a=sum(5,4,3);
    cout<<a<<endl;
    b=sum(10);
    cout<<b<<endl;
}