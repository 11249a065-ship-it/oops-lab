#include<iostream>
using namespace std;
class patient
{
    public:
       int patientID;
       string name;
       string disease;
       void setpatient(int id,string n,string d)
       {
        patientID = id;
        name=n;
        disease;
       }
       void showpatient();
};
void patient::showpatient()
{
    cout<<"patient ID:"<<patientID
        <<",Name :"<<name 
        <<",Disease :"<<disease<<endl;
}
int main()
{
    patient p1,p2;
    p1.setpatient(301,"Arjun","fever");
    p2.setpatient(302,"Meena","Diabetes");
    p1.showpatient();
    p2.showpatient();
    return 0;
}