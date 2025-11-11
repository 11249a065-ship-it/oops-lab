#include<iostream>
using namespace std;
inline int ad(int a,int b)
{
    return a+b;
}
int main()
{
    int x,y;
    cout<<"Enter two numbers:";
    cin>>x>>y;
    cout<<"sum of"<<x<<"and"<<y<<"is:"<<ad(x,y)<<endl;
    return 0;
}