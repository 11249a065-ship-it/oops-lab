#include<iostream>
using namespace std;
class Book
{ 
    public:
       string tittle;
       string author;
       float price;
       void display()
       { 
        cout<<"Tittle:"<<tittle
            <<",Author:"<<author
            <<",price.Rs"<<price<<endl;
       }
};
int main()
{ 
    Book b1,b2;
    b1.tittle="c++ programming";
    b1.author="Bjarne stroustruo";
    b1.price=750.50;
    b2.tittle="Data structures";
    b2.author="Marks Allen Weiss";
    b2.price=600.75;
    b1.display();
    b2.display();
    return 0;
}