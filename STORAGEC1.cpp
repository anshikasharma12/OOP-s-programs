//auto storage class
#include"iostream"
using namespace std;
void increment();
int main()
{
    increment();
    increment();
    increment();
}
void increment()
{
    int i=10;
    i++;
    cout<<i<<endl;
    
}