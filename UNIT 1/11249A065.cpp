#include<iostream>
using namespace std;
class laptop
{
    public:
        string brand;
        string processor;
        int ram;
        void display()
        {
          cout<<"Brand:"<<brand
              <<",Processor:"<<processor
              <<",RAM:"<<ram<<"GB"<<endl;
        }
};
int main()
{
    laptop l1,l2;
    l1.brand="Del";
    l1.processor="intel i5";
    l1.ram=8;
    l2.brand="Hp";
    l2.processor="amdryzeen5";
    l2.ram=16;
    l1.display();
    l2.display();
    return 0;
}