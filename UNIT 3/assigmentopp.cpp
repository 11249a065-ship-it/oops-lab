#include<iostream>
#include<string.h>
using namespace std;
class Book
{
    char tittle[50];
    float price;
    public:
       void getdata()
       {
        cout<<"emter booktittle:";
        cin>>tittle;
        cout<<"enter price:";
        cin>>price;
       }
       void operator=(Book &b)
       {
        strcpy(tittle,b.tittle);
        price=b.price;
       }
       void display()
       {
        cout<<"tittle:"<<tittle<<",price:"<<price<<endl;
       }
};
int main()
{
    Book b1,b2;
    b1.getdata();
    b2=b1;
    cout<<"\ncopied book details:\n";
    b2.display();
    return 0;
}