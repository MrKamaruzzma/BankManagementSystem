#include <iostream>

using namespace std;

void show(){
cout<<"\n\n\n\t\t\t\tBank System"<<endl;
cout<<"\n\t\t\t------------------------------"<<endl;;
cout<<"\n\t\t\t1. Open A New Account ";
cout<<"\n\t\t\t2. Account Details ";
cout<<"\n\t\t\t3. Check Balanace ";
cout<<"\n\t\t\t4. Deposit ";
cout<<"\n\t\t\t5. Withdraw ";
cout<<"\n\t\t\t6. Transfer ";
cout<<"\n\t\t\t7. Exit ";
cout<<"\n\t\t\t-------------------------------"<<endl;
}

int main(){
         int op;
         string name;
         int AcNo;
         string Add;
         int balance;
         do{
         show();
         cout<<"\t\t\tPlease select option: ";
         cin>>op;
         system("cls");
         switch(op){
         case 1:cout<<"\n\t\t\t------Please Fill the form------"<<endl;
         cout<<"\n\t\t\tPlease enter the customer name: ";
         cin>>name;
         cout<<"\t\t\tPlease enter the account number: ";
         cin>>AcNo;
         cout<<"\t\t\tPlease enter custoemr address :";
         cin>>Add;
         cout<<"\t\t\tPlease enter the balance: ";
         cin>>balance;
         break;

         case 2:cout<<"\n\t\t\tCutomer name is: "<<name;
         cout<<"\n\t\t\tCustomer account number is: "<<AcNo;
         cout<<"\n\t\t\tCustoemr address is: "<<Add;
         cout<<"\n\t\t\tCutomer balance is: "<<balance;
         break;

         case 3:cout<<"\n\t\t\tBalance is: "<<balance<<"$";
         break;

         case 4:cout<<"\n\t\t\tDeposit amount: ";
         double DepositAmount;
         cin>>DepositAmount;
         balance+=DepositAmount;
         break;

         case 5:cout<<"\n\t\t\tWithdraw amount: ";
         double WihdrawAmount;
         cin>>WihdrawAmount;
         if(WihdrawAmount<=balance)
         balance-=WihdrawAmount;
         else
         cout<<"\n\t\t\tYou have not enough money!!!!!";
         break;

         case 6:cout<<"\n\t\t\tTransfer money: ";
         double TransferMoney;
         cin>>TransferMoney;
         if(TransferMoney<=balance)
         balance-=TransferMoney;
         else
         cout<<"\n\t\t\tYou have not money!!!!!";
         break;

         case 7:cout<<"\n\t\t\tExit ";
         break;
         default:
         cout<<"\t\t\tPlease select right option!!!!!!";
         break;
         }
         }while(op<=7);
         }





