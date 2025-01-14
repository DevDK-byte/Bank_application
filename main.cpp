#include <iostream>
#include<conio.h>
#include<stdlib.h>

using namespace std;

int main()
{
    int option; double balance=1000; string game; int n, random_number;
    double amount; double withdraw;

    cout<<" "<<" "<<" "<<"                              WELCOME  TO  ONLINE  BANK !"       <<" "<<endl;
    cout<<endl;
    cout<<"OUR SERVICES--- "<<endl;

    cout<<"1."<<" "<<"check balance"<<" "<<endl;
    cout<<"2."<<" "<<"Deposit money"<<" "<<endl;
    cout<<"3."<<" "<<"Withdraw money"<<" "<<endl;
    cout<<"4."<<" "<<"Open an account"<<" "<<endl;
    cout<<"5."<<" "<<"show account details "<<" "<<endl;
    cout<<" "<<"\n"<<endl;
    cout<<"                          ADVERTISEMENT!!!!!                "<<endl;
    cout<<"Do you want to play a game and win ? CLICK (YES/NO)" <<endl;
    cin>>game;

    if(game=="no" || game=="NO"){
        cout<<"Thank you!";
        }
    else if(game=="yes" || game=="NO")
    {
        cout<<"\n"<<endl;
         cout<<"WELCOME TO GUESS AND WIN BIG MONEY!"<<endl;
         cout<<endl;

         while(1)
         {
             cout<<"Enter any number from 1 to 5 = ";
             cin>>n;
             random_number = rand()%5;
             if(n==random_number)
             {
                 cout<<endl;
                 cout<<"Congrats! you won 10k"<<endl;
                 balance += 10000;
                 cout<<"Your account has been credited.Please check"<<endl;
                 break;
             }
             else
             {
                cout<<"BAD luck!Try again"<<endl;
                cout<<"The number was = "<<random_number;
                cout<<endl;
             }
        }
    }
    cout<<endl;

    cout<<"Enter your option= "<<endl;
    cin>>option;

        if(option>4 || option<1)
        {
            while(1){
            cout<<"Invalid! Try again: "<<endl;
            cout<<"Enter your option= "<<endl;
            cin>>option;
            break;
            }
        }

        switch(option)
        {
        case 1:
            cout<<"Your current balance is  = "<<balance;
            break;

        case 2:
            cout<<"Enter your amount = ";
            cin>>amount;

            if(amount<0)
               {
                cout<<endl;
                cout<<"An error occurred while depositing money. Invalid input "<<endl;
               }
            else
            {
            balance += amount;
            cout<<"Money succesfully deposited."<<endl;
            cout<<endl;
            cout<<"your current balance ="<<balance;
            break;
            }

        case 3:
            cout<<"Enter the amount you want to withdraw =";
            cin>>withdraw;

            if(withdraw<0 || withdraw>balance)
               {
                cout<<endl;
                cout<<"An error occurred while withdrawing money. Invalid input "<<endl;
               }
            else
            {
            balance -= withdraw;
            cout<<"You have withdrawed money from your account"<<endl;
            cout<<endl;
            cout<<"your current balance ="<<balance;
            break;
            }

        case 4:
            cout<<      "PLEASE ENTER YOUR ACCOUNT DETAILS BELOW -->"<<endl;
            string name; string address, nationality; int nid,number;

            cout<<"You need to deposit minimum 500 Taka to create an account "<<endl;
            cout<<"Enter an amount to create an account = ";
            cin>>amount;

            if(amount<500)
            {
                cout<<"Sorry! you cannot create an account."<<endl;
            }
            else if(amount>=500)
            {
                cout<<"Enter your account name = ";
                cin>>name;
                cout<<"Enter your address = ";
                cin>>address;
                cout<<"Enter your nationality = ";
                cin>>nationality;
                cout<<"Enter your NID number = ";
                cin>>nid;
                cout<<"Enter your Mobile number = ";
                cin>>number;
                cout<<endl;
                cout<<"Your account has been created,Congrats!. The details are -->"<<endl;
                cout<<name<<endl;
                cout<<address<<endl;
                cout<<nationality<<endl;
                cout<<nid<<endl;
                cout<<number<<endl;
            }
            break;
        }

    getch();
}
