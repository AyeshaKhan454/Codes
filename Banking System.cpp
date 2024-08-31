#include<iostream>
#include<string>
using namespace std;
class Services
{
  private:
      string name="ABC";
      string address="House#O,Street#OO,OOO Town,City XXX";
      string phoneNo="XXXX-XXXXXXX";
  public:
      void acc_Details()
      {
        cout<<"Name:"<<name<<endl;
        cout<<"Address:"<<address<<endl;
        cout<<"Phone No."<<phoneNo<<endl;
      }
    void Transaction(int TA)
    {
     char a;
     int amount;
     cout<<"Transaction:"<<endl;
     cout<<"Press w to withdraw"<<endl;
     cout<<"Press d to deposit"<<endl;
     cout<<"Press b for bill payment"<<endl;
     cout<<"Press m for Mobile top ups"<<endl;
     cout<<"Press t for money Transfer"<<endl<<endl;
     cin>>a;
     if(a=='w')
     {cout<<"Enter the amount:";
     cin>>amount;
     cout<<"Balance before withdraw:"<<TA<<endl;
     cout<<"Balance after withdraw:"<<TA-amount<<endl;}
     else if(a=='d')
     {cout<<"Enter the amount:";
     cin>>amount;
     cout<<"Balance before deposit:"<<TA<<endl;
     cout<<"Balance after deposit:"<<TA+amount<<endl;}
     else if(a=='b')
     {cout<<"Enter the amount:";
     cin>>amount;
     cout<<"Bill payed:"<<amount<<endl;}
     else if(a=='m')
     {string mobile;
     cout<<"Enter the amount:";
     cin>>amount;
     cout<<"Enter mobile number:";
     cin>>mobile;
     cout<<"Mobile Top up of Rs."<<amount<<" is done at:"<<mobile<<endl;}
     else if(a=='t')
     {string accN;
      cout<<"Enter the account number:";
      cin>>accN;
      cout<<"Enter amount:";
      cin>>amount;
      cout<<amount <<"amount has been transfered to acc:"<<accN<<endl;
     }
     else
     {cout<<"Wrong Input!";}
    }
    void Loans(int LA, int In_rate, int TA)
    {cout<<"Your Balance now:"<<TA+LA<<endl;
     cout<<"The Interest rate is ["<<In_rate<<"%]"<<endl;
    }
};
///////////////////////////////////////////////////////////////////
class HBL
{
  private:
      int Amount=500000;
      Services s;
      string CID="12345";
      string acc_num="54321";
      string Bank="Habib Bank Limited.";
  public:
    void act()
    {
     char c;
     cout<<"Welcome to HBL!"<<endl;
e:     cout<<"Press d to check account details"<<endl;
     cout<<"Press t to make transaction"<<endl;
     cout<<"Press l to take loan"<<endl;
     cin>>c;
     if(c=='d')
     {s.acc_Details();
     cout<<"Customer ID:"<<CID<<endl;
     cout<<"Account number:"<<acc_num<<endl;
     cout<<"Bank:"<<Bank<<endl;}
     else if(c=='t')
     {s.Transaction(Amount);}
     else if(c=='l')
     {
      int LoanA;
      int INR;
      char g;
      cout<<"Enter the amount for loan:";
      cin>>LoanA;
     cout<<"Choose the type of loan:"<<endl;
     cout<<"Press p for personal loan"<<endl;
     cout<<"Press h for home loan"<<endl;
     cout<<"Press s for student loan"<<endl;
     cout<<"Press c for car loan"<<endl;
     cin>>g;
     if(g=='p')
     {INR=15;}
     else if(g=='h')
     {INR=25;}
     else if(g=='s')
     {INR=10;}
     else if(g=='c')
     {INR=20;}
     else
     {cout<<"Wrong Input!";}
     s.Loans(LoanA, INR, Amount);
     }
     else
     {cout<<"Wrong Input!";}
     char q;
     cout<<"Do you want to choose options again (Y/N):"<<endl;
     cin>>q;
     if(q=='Y' || q=='y')
     {goto e;}
     else
      {}
    }
};
//////////////////////////////////////////////////////////
class UNB
{
  private:
      int Amount=400000;
      Services s;
      string CID="6789";
      string acc_num="9876";
      string Bank="United Bank Limited.";
  public:
    void act()
    {
     char c;
     cout<<"Welcome to United Bank!"<<endl;
e:     cout<<"Press d to check account details"<<endl;
     cout<<"Press t to make transaction"<<endl;
     cout<<"Press l to take loan"<<endl;
     cin>>c;
     if(c=='d')
     {s.acc_Details();
     cout<<"Customer ID:"<<CID<<endl;
     cout<<"Account number:"<<acc_num<<endl;
     cout<<"Bank:"<<Bank<<endl;}
     else if(c=='t')
     {s.Transaction(Amount);}
     else if(c=='l')
     {int LoanA;
      int INR;
      char g;
      cout<<"Enter the amount for loan:";
      cin>>LoanA;
     cout<<"Choose the type of loan:"<<endl;
     cout<<"Press p for personal loan"<<endl;
     cout<<"Press h for home loan"<<endl;
     cout<<"Press s for student loan"<<endl;
     cout<<"Press c for car loan"<<endl;
     cin>>g;
     if(g=='p')
     {INR=14;}
     else if(g=='h')
     {INR=21;}
     else if(g=='s')
     {INR=9;}
     else if(g=='c')
     {INR=19;}
     else
     {cout<<"Wrong Input!";}
     s.Loans(LoanA, INR, Amount);}
     else
     {cout<<"Wrong Input!";}
     char q;
     cout<<"Do you want to choose options again (Y/N):"<<endl;
     cin>>q;
     if(q=='Y' || q=='y')
     {goto e;}
     else
      {}
    }
};
///////////////////////////////////////////////////////
class ALB
{
  private:
      int Amount=300000;
      Services s;
      string CID="101112";
      string acc_num="121110";
      string Bank="Allied Bank Limited.";
  public:
    void act()
    {
     char c;
     cout<<"Welcome to Allied Bank!"<<endl;
 e:    cout<<"Press d to check account details"<<endl;
     cout<<"Press t to make transaction"<<endl;
     cout<<"Press l to take loan"<<endl;
     cin>>c;
     if(c=='d')
     {s.acc_Details();
     cout<<"Customer ID:"<<CID<<endl;
     cout<<"Account number:"<<acc_num<<endl;
     cout<<"Bank:"<<Bank<<endl;}
     else if(c=='t')
     {s.Transaction(Amount);}
     else if(c=='l')
     {int LoanA;
      int INR;
      char g;
      cout<<"Enter the amount for loan:";
      cin>>LoanA;
     cout<<"Choose the type of loan:"<<endl;
     cout<<"Press p for personal loan"<<endl;
     cout<<"Press h for home loan"<<endl;
     cout<<"Press s for student loan"<<endl;
     cout<<"Press c for car loan"<<endl;
     cin>>g;
     if(g=='p')
     {INR=20;}
     else if(g=='h')
     {INR=27;}
     else if(g=='s')
     {INR=13;}
     else if(g=='c')
     {INR=24;}
     else
     {cout<<"Wrong Input!";}
     s.Loans(LoanA, INR, Amount);}
     else
     {cout<<"Wrong Input!";}
     char q;
     cout<<"Do you want to choose options again (Y/N):"<<endl;
     cin>>q;
     if(q=='Y' || q=='y')
     {goto e;}
     else
      {}
    }
};
//////////////////////////////////////////////////////
class MB
{
  private:
      int Amount=300000;
      Services s;
      string CID="131415";
      string acc_num="151413";
      string Bank="Meezan Bank Limited.";
  public:
    void act()
    {
     char c;
     cout<<"Welcome to Meezan Bank!"<<endl;
e:     cout<<"Press d to check account details"<<endl;
     cout<<"Press t to make transaction"<<endl;
     cout<<"Press l to take loan"<<endl;
     cin>>c;
     if(c=='d')
     {s.acc_Details();
     cout<<"Customer ID:"<<CID<<endl;
     cout<<"Account number:"<<acc_num<<endl;
     cout<<"Bank:"<<Bank<<endl;}
     else if(c=='t')
     {s.Transaction(Amount);}
     else if(c=='l')
     {int LoanA;
      int INR;
      char g;
      cout<<"Enter the amount for loan:";
      cin>>LoanA;
     cout<<"Choose the type of loan:"<<endl;
     cout<<"Press p for personal loan"<<endl;
     cout<<"Press h for home loan"<<endl;
     cout<<"Press s for student loan"<<endl;
     cout<<"Press c for car loan"<<endl;
     cin>>g;
     if(g=='p')
     {INR=23;}
     else if(g=='h')
     {INR=29;}
     else if(g=='s')
     {INR=17;}
     else if(g=='c')
     {INR=15;}
     else
     {cout<<"Wrong Input!";}
     s.Loans(LoanA, INR, Amount);}
     else
     {cout<<"Wrong Input!";}
     char q;
     cout<<"Do you want to choose options again (Y/N):"<<endl;
     cin>>q;
     if(q=='Y' || q=='y')
     {goto e;}
     else
      {}
    }
};
/////////////////////////////////////////////////////////
class AB
{
  private:
      int Amount=200000;
      Services s;
      string CID="161718";
      string acc_num="181716";
      string Bank="Alfalah Bank Limited.";
  public:
    void act()
    {
     char c;
     cout<<"Welcome to Alfalah Bank!"<<endl;
e:     cout<<"Press d to check account details"<<endl;
     cout<<"Press t to make transaction"<<endl;
     cout<<"Press l to take loan"<<endl;
     cin>>c;
     if(c=='d')
     {s.acc_Details();
     cout<<"Customer ID:"<<CID<<endl;
     cout<<"Account number:"<<acc_num<<endl;
     cout<<"Bank:"<<Bank<<endl;}
     else if(c=='t')
     {s.Transaction(Amount);}
     else if(c=='l')
     {int LoanA;
      int INR;
      char g;
      cout<<"Enter the amount for loan:";
      cin>>LoanA;
     cout<<"Choose the type of loan:"<<endl;
     cout<<"Press p for personal loan"<<endl;
     cout<<"Press h for home loan"<<endl;
     cout<<"Press s for student loan"<<endl;
     cout<<"Press c for car loan"<<endl;
     cin>>g;
     if(g=='p')
     {INR=23;}
     else if(g=='h')
     {INR=19;}
     else if(g=='s')
     {INR=8;}
     else if(g=='c')
     {INR=18;}
     else
     {cout<<"Wrong Input!";}
     s.Loans(LoanA, INR, Amount);}
     else
     {cout<<"Wrong Input!";}
     char q;
     cout<<"Do you want to choose options again (Y/N):"<<endl;
     cin>>q;
     if(q=='Y' || q=='y')
     {goto e;}
     else
      {}
    }
};
//////////////////////////////////////////////////////////////
int main()
{
 int k;
 HBL h;
 UNB u;
 ALB a;
 MB m;
 AB b;
g: cout<<"Choose Bank from the followings:"<<endl;
 cout<<"1.Habib Bank (press 1)"<<endl;
 cout<<"2.United Bank (press 2)"<<endl;
 cout<<"3.Allied Bank (press 3)"<<endl;
 cout<<"4.Meezan Bank (press 4)"<<endl;
 cout<<"5.Alfalah Bank (press 5)"<<endl;
 cin>>k;
 if(k==1)
 {h.act();}
 else if(k==2)
 {u.act();}
 else if(k==3)
 {a.act();}
 else if(k==4)
 {m.act();}
 else if(k==5)
 {b.act();}
 else
 {cout<<"Wrong Input!";}
 cout<<endl;
 char x;
 cout<<"If you want to choose bank again PRESS Y else PRESS N:";
 cin>>x;
 if(x=='Y' || x=='y')
 {goto g;}
 else if(x=='N' || x=='n')
 {cout<<"Have a nice day sir :)";}
 else
 {cout<<"Wrong input!";}
 return 0;
}
