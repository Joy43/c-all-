#include<iostream>
#include<string>
using namespace std;
class BankAccount
{
    public :
        string name;
        int blance;
  void withdraw(int amout)
{
    blance=blance-amout;
}
void print(){
    cout <<name <<"has" <<blance<<"dollars"<<endl;
}
};

int main(){
  BankAccount account1;
  account1.name="joy";
  account1.blance=300;
//   cout <<account1.name <<"has" <<account1.blance<<"dollars"<<endl;
account1.print();
BankAccount account2;

account2.name="sultan";
account2.blance=600;
// cout <<account2.name <<"has" <<account2.blance<<"dollars"<<endl;
account2.print();
account2.withdraw(100);
// cout <<account2.name <<"has" <<account2.blance<<"dollars"<<endl;
account2.print();






  return 0;

}