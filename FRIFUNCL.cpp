#include<iostream>
using namespace std;
 class A
 {
    int x;
    friend class B;
 };
 class B{
public:
void display(A t1)
{
    t1.x=20;
    cout<<t1.x<<endl;
}
 };
 int main()
 {
    A obj1;
    B obj2;
    obj2.display(obj1);
 }