#include<iostream>
#include<windows.h>
#include<conio.h>
using namespace std;
int main()
{
    char PinCode[4]={'-','-','-','-'};
    char Password[4]={'1','2','3','4'};
    char EPassword[4];
    char ch;
  cout<<"Enter your 4-digit Pin Code:"<<endl<<endl<<"\t";
    for(int j=0;j<4;j++)
    {cout<<PinCode[j]<<"\t";}
d:  {for(int k=0;k<4;k++)
    {ch=getch();
    {Beep(750,300);
    PinCode[k]='*';
    EPassword[k]=ch;
    goto e;}
e:  system("cls");
    for(volatile int i=0;i<900000;i++)
    {}
    cout<<"Enter your 4-digit Pin Code:"<<endl<<endl<<"\t";
    for(int i=0;i<4;i++)
    {cout<<"\t"<<PinCode[i];}
    }
    }
    int r=0;
    static int wrc=1;
    for(int y=0;y<4;y++)
    {if(EPassword[y]==Password[y])
    r++;}
    if(r==4)
    {Beep(1000,700);
    cout<<endl<<"Good!";}
    else
    {Beep(1000,1000);
    if(wrc<3)
    {cout<<endl<<"Wrong Pin! Press ENTER to try again."<<endl;
    wrc++;
    if(getch())
    {
        for(int s=0;s<4;s++)
        {
          PinCode[s]='-';
        }
        goto d;}
    }
    else
    {cout<<endl<<endl<<"Your card has been blocked. Please contact your bank.";}
    }
}
