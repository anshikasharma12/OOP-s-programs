#include<iostream>
using namespace std;
class test
{
    int code;
    static int count;
    public:
    void getcode()
    {
        code=++count;
    }
    void showcode()
    {
        cout<<"Code=<<code<<endl;
    }
    static void showcount()
    {
        cout<<"Count="<<count<<endl;
    }};
int test::count;
int main()
{
    test 11,12;
    11.getcode();
    12.getcode();
    test::
}