#include <bits/stdc++.h>
typedef long long ll;
typedef long double ld;
typedef double d;
using namespace std;
void mohamed(){
     ios::sync_with_stdio(false);
     cin.tie(0);cout.tie(0);
}
// create a class Bank
class bank{
    // a private data member
private:
    int account_number;
    string name;
    int balance;
    // a public method
public:
    // default constructor
    bank(){
        account_number=0;
        name="UnKnown";
        balance=0;
    }
    // parameterize constructor
    bank(int an,string n,int b){
        account_number=an;
        name=n;
        balance=b;
    }

    void create_new_account(){
        cout<<"enter your account number:"<<endl;
        cin >> account_number;
        cout<<"enter your Name:"<<endl;
        cin >> name;
        cout<<"enter your balance:"<<endl;
        cin >> balance;
    }
    void display_info(){
        cout<<"your account_number is "<<account_number<<endl;
        cout<<"your name is "<<name<<endl;
        cout<<"your balance is "<<balance<<endl;
    }
    // ايداع
    void deposit(){
        long long  number;
        cout<<"enter  a money you want to deposit "<<endl;
        cin >> number ;
        balance+=number;
    }
    // سحب
    void Withdrawal(){
        long long  number ;
        cout<<"enter a money you want to Withdraw "<<endl;
        cin >> number ;

        // before you Withdraw we should check if money he want to Withdraw is less than balance
         if(number<=balance){
            balance-=number;

         }
         else
            cout<<"Opps , Dear your Balance is less than  money you want to Withdraw " <<endl;
    }
// friend function to access private member
 bool search(int x);
};
// friend  function to access private data Member
bool bank::search(int x){
    if(account_number==x){
    // display an information
    display_info();
        return true;
    }

    return false;
}
int main()
{
  mohamed();
   bank b;
   bool found=false;
   int option,searching;
   // this function to display create_new_account();
    b.create_new_account();
cout<<"==========================================="<<endl;
  do{
    cout<<" 1:display All \n 2:About Account number\n 3:Withdrawal \n 4:Deposit\n 5:Exit\n";
    cout<<"Enter your option you want "<<endl;
    cin >> option;
    cout<<"========================================"<<endl;
    switch(option){
    case 1:
      b.display_info();
      cout<<"======================================="<<endl;
      break;
    case 2:
        cout<<"enter your account number "<<endl;
        cin >> option;
        found=b.search(option);
         cout<<"======================================="<<endl;
        if(found)
            break;
        else
           cout<<"Can Not Find it " <<endl;
        break;
    case 3:
        cout<<"enter a money you want to Withdraw"<<endl;
        cin >> option;
       found=b.search(option);
       if(found){
        b.Withdrawal();
        break;
       }
       else
       {
        cout<<" Can't Do Withdrawal"<<endl;
       }
       break;
    case 4:
        cout<<"enter a money you want to Deposite "<<endl;
        cin >> option ;
        found = b.search(option);
      if(found){
         b.deposit();
        break;
      }
        else
        {
        cout<<" Can't do Deposite"<<endl;
        }
      break;
    case 5:
        cout<<"Have a Nice Day Sir"<<endl;
        break;
    default:
        cout<<"Opps ,Wrong Operation "<<endl;
    }

  }
   while(option!=5);
}

