#include<iostream>
using namespace std;
class Employee
{
    int id;
    char name[20];
    public:
       void getdata()
       {
        cout<<"enter ID and name:";
        cin>>id>>name;
       }
       void display()
       {
        cout<<"Id:"<<id<<"name:"<<name<<endl;
       }
};
int main()
{
    Employee e[3];
    for(int i=0;i<3;i++)
    {
        e[i].getdata();
    }
    cout <<"\n Employee detailes:\n";
    for(int i=0;i<3;i++)
    {
        e[i].display();
    }
    return 0;
}