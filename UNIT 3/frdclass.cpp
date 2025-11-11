#include<iostream>
using namespace std;

class BankAccount{
private:
   string owner;
   double balance;
   friend class Auditor;

public:
   BankAccount(string o, double b) : owner(o), balance(b){}
   
   void showAccount() const{
      cout<<"owner:"<<owner<<",Balance:$"<<balance<<endl;
   }
  };

  class Auditor{
  public:
      void auditAccount(BankAccount &acc){
          cout<<"auditing account of"<<acc.owner<<endl;
          if(acc.balance<1000){
            cout<<"low balance detected. adding$100 bonus.\n";
            acc.balance+= 100;
          }
          cout<<"final balance:$"<< acc.balance<<endl;
      }
  };

  int main(){
      BankAccount acc1("Alice",850);
      BankAccount acc2("Bob",1500);

      Auditor auditor;

      acc1.showAccount();
      acc2.showAccount();

      cout<<"\n---Auditor reviewing accounts ---\n";
      auditor.auditAccount(acc1);
      auditor.auditAccount(acc2);

      cout<<"\n---After audit ---\n";
      acc1.showAccount();
      acc2.showAccount();

      return 0;
  }