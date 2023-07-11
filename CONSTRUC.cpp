#include<iostream>
using namespace std;
class student
{
    int rollno;
    char name[50];
    double fee;
public:
    student();
    void display();
};
student::student()
{
    cout<<"enter the rollno:";
    cin>>rollno;
    cout<<"enter the name:";
    cin>>name;
    cout<<"enter the fee:";
    cin>>fee;
}
void student::display()
{
    cout<<endl<<rollno<<endl<<name<<endl<<fee<<endl;
}
int main()
{
    student s;
    s.display();
    return 0;
}