#include<iostream>
using namespace std;
class first
{
    public:
    void showf()
    {
        cout<<" hello from first class"<<endl;
    }
};
//container class
class second{
    first f;
    public:
    //constructor
    second()
    {
        f.showf();
    }};
    int main()
    {
        second s;
    }