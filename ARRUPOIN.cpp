#include"iostream"
using namespace std;
int main()
{
    int arr[5],*ptr,i;
    cout<<"enter values="<<endl;
    for(i=0;i<5;i++)
    cin>>arr[i];
    ptr=&arr[0];
    //cout<<"pointer array="<<endl;
    //for(i=0;i<5;i++)
    cout<<*ptr<<endl;
    cout<<*ptr++<<endl;
    cout<<(++(*ptr))<<endl;

cout<<*(ptr+4)<<endl;
    return 0;

}