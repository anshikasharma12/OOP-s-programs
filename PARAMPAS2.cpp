//call by reference
#include"iostream"
using namespace std;
void swap(int &,int &);
int main()
{
    int a,b;
    cout<<"enter a="<<endl;
    cin>>a;
    cout<<"enter b="<<endl;
    cin>>b;
    cout<<"before swapping"<<endl;
    cout<<a<<"\t"<<b<<endl;
    swap(a,b);
    cout<<"after swapping"<<endl;
    cout<<a<<"\t"<<b<<endl;
}
void swap(int &x,int &y)
{
    int temp;
    temp=x;
    x=y;
    y=temp;
}