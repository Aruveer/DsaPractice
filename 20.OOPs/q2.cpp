#include<bits/stdc++.h>
using namespace std;

class BankAccount{
    int accNum;
    int bal;
    public:
        BankAccount(int a,int b){
            accNum=a;
            bal=b;
        }
        void deposit(int val){
            this->bal+=val;
            cout<<val<<" rupees have been added!\n";
        }
        void withdraw(int val){
            this->bal-=val;
            cout<<val<<" rupees have been deducted.\n";
        }
        void getBalance(){
            cout<<"Total : "<<this->bal<<"\n";
        }
};

int main(){
    BankAccount a(101,0);
    a.deposit(10);
    a.deposit(10);
    a.deposit(10);
    a.getBalance();
    a.withdraw(10);
    a.getBalance();



    return 0;
}