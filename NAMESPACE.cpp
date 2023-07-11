#include<iostream>
using namespace std;
namespace test1 //defining a namespace
{
    int m=80;
    int n=40;
    namespace test2 //nesting of namespace
    {
    int c=20;
    }
}
namespace{
    int z=100;
}
int main()
{
    cout<<"namespace test1->m="<<test1::m<<endl;
     cout<<"namespace test1->n="<<test1::n<<endl;
      cout<<"namespace test2 under test1->c="<<test1::test2::c<<endl;
      cout<<"global namespace->z="<<z<<endl;
}