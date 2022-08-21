#include <iostream>
#include <stdlib.h>

using namespace std;

class bank
{
  char name[100], addr[100], y;
  int balance, amount;
 public:
 
  void open_account();
  void deposite_money();
  void withdraw_money();
  void display_account();
};

void bank::open_account()
{ 
  
  system("clear");
  cout << "Enter your full name : ";
  cin.ignore();
  cin.getline(name, 100);
  cout << "Enter you Address : ";
  cin.ignore();
  cin.getline(addr, 100);
  cout << "What type of account you want to open saving(s) or current(c) : ";
  cin >> y;
  cout << "Enter your balance in Account : ";
  cin >> balance;
  cout << "Your account is created";
  
}

void bank::deposite_money()
{
  int a;
  cout << "Enter how much money you want to deposite:$  ";
  cin >> a;
  balance += a;
  cout << " Your total deposite amount : "<<balance<<endl;

     
}

void bank::display_account()
{
 
 cout << "Entered the name: "<<name<<endl;
 cout << "Entered your address: "<<addr<<endl;
 cout << "Type of account that you open : "<<y<<endl;
 cout << "Amount you deposite :$ "<<balance<<endl;

 
}

void bank::withdraw_money()
{
  cout << "==== Withdraw ===="<<endl;
  cout << "Enter your amount for withdrawing:$ ";
  cin >> amount;
  balance -= amount;
  cout << "Now your total amount is left :$ "<<balance<<endl;
  
}

int main()
{
  int ch, x, n;
  bank obj;
  system("clear");
  do{
    cout << "\n1).Open account "<<endl;
    cout << "2).Deposite money"<<endl;
    cout << "3).Withdraw money"<<endl;
    cout << "4).Display Accout "<<endl;
    cout << "5).Exit"<<endl;
    cout << "Please sir, Enter your selection the option: ";
    cin >> ch;
    
    switch(ch)
    {
      case 1: 
           system("clear");
           cout <<  "1). Open account "<<endl;
           obj.open_account();
           break;
      case 2: 
           system("clear");
           cout << "2). Deposite money"<<endl;
           obj.deposite_money();
           break;
      case 3: 
           system("clear");
           cout << "3). Withdraw money"<<endl;
           obj.withdraw_money();
           break;
      case 4: 
           cout << "4).Display account"<<endl;
           obj.display_account();
           break;
      case 5: 
           system("clear");
           cout << "5). Exit Account"<<endl;
           exit(1);
           break;
      default:
         cout << "This option is Null!!!"<<endl;
         break; 
           
    }
  
  }while(ch != 0);

  return 0;
}










