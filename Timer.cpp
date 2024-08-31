#include<iostream>
#include<windows.h>
using namespace std;
int main()
{
    int hour=0,minute=0,second=0,H=0,M=0,S=0;
    cout<<"Set the time for TIMER:"<<endl<<endl;
    cout<<"Hours:"<<endl;
    cin>>H;
    cout<<"Minute:"<<endl;
    cin>>M;
    cout<<"Second:"<<endl;
    cin>>S;
    cout<<endl;
    cout<<"Press ENTER to start the TIMER"<<endl;
    for(int i=0;i<=60;i++)
    {if(i==0)
    if(!cin.get())
    {goto e;}
e:  system("cls");
    if(i==60)
    {(minute++);}
    if(i==60)
    {(second=0);}
    if(i==60)
    {(i=0);}
    if(minute==60)
    {(hour++);}
    if(minute==60)
    {(minute=0);}
    cout<<hour<<":"<<minute<<":"<<second++<<endl;
    for(volatile int i=0;i<900000000+1000000000-1000000;i++)
    {}
    if((hour==H) && (minute==M) && (second>S))
    {goto a;}
    }
a:  Beep(750,300);
    cout<<"Your time is UP!";
    return 0;
}

