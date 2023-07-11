#include"iostream"
using namespace std;
int i;//global variable
void externstorageclass()
{
    extern int i;
    cout<<"value of the variable 'i'"<<"as extern: "<<i<<endl;
    i=2;
    cout<<"new value of 'i'"<<"as extern: "<<i<<endl;
}
int main()
{
    externstorageclass();
    return 0;
}

