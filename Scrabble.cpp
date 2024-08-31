#include<iostream>
#include<string.h>
using namespace std;
int main()
{
  int count1=0,count2=0;
  string s1,s2;
  cout<<"Player1:";
  cin>>s1;
  cout<<"Player2:";
  cin>>s2;
  cout<<endl;
  for(int i=0;i<s1.length();i++)
  {
   if(s1[i]=='A' || s1[i]=='a')
   {count1+=1;}
   else if(s1[i]=='B' || s1[i]=='b')
   {count1+=3;}
   else if(s1[i]=='C' || s1[i]=='c')
   {count1+=3;}
   else if(s1[i]=='D' || s1[i]=='d')
   {count1+=2;}
   else if(s1[i]=='E' || s1[i]=='e')
   {count1+=1;}
   else if(s1[i]=='F' || s1[i]=='f')
   {count1+=4;}
   else if(s1[i]=='G' || s1[i]=='g')
   {count1+=2;}
   else if(s1[i]=='H' || s1[i]=='h')
   {count1+=4;}
   else if(s1[i]=='I' || s1[i]=='i')
   {count1+=1;}
   else if(s1[i]=='J' || s1[i]=='j')
   {count1+=8;}
   else if(s1[i]=='K' || s1[i]=='k')
   {count1+=5;}
   else if(s1[i]=='L' || s1[i]=='l')
   {count1+=1;}
   else if(s1[i]=='M' || s1[i]=='m')
   {count1+=3;}
   else if(s1[i]=='N' || s1[i]=='n')
   {count1+=1;}
   else if(s1[i]=='O' || s1[i]=='o')
   {count1+=1;}
   else if(s1[i]=='P' || s1[i]=='p')
   {count1+=3;}
   else if(s1[i]=='Q' || s1[i]=='q')
   {count1+=10;}
   else if(s1[i]=='R' || s1[i]=='r')
   {count1+=1;}
   else if(s1[i]=='S' || s1[i]=='s')
   {count1+=1;}
   else if(s1[i]=='T' || s1[i]=='t')
   {count1+=1;}
   else if(s1[i]=='U' || s1[i]=='u')
   {count1+=1;}
   else if(s1[i]=='V' || s1[i]=='v')
   {count1+=4;}
   else if(s1[i]=='W' || s1[i]=='w')
   {count1+=4;}
   else if(s1[i]=='X' || s1[i]=='x')
   {count1+=8;}
   else if(s1[i]=='Y' || s1[i]=='y')
   {count1+=4;}
   else if(s1[i]=='Z' || s1[i]=='z')
   {count1+=10;}
   else
   {count1+=0;}
  }
  for(int j=0;j<s2.length();j++)
  {
   if(s2[j]=='A' || s2[j]=='a')
   {count2+=1;}
   else if(s2[j]=='B' || s2[j]=='b')
   {count2+=3;}
   else if(s2[j]=='C' || s2[j]=='c')
   {count2+=3;}
   else if(s2[j]=='D' || s2[j]=='d')
   {count2+=2;}
   else if(s2[j]=='E' || s2[j]=='e')
   {count2+=1;}
   else if(s2[j]=='F' || s2[j]=='f')
   {count2+=4;}
   else if(s2[j]=='G' || s2[j]=='g')
   {count2+=2;}
   else if(s2[j]=='H' || s2[j]=='h')
   {count2+=4;}
   else if(s2[j]=='I' || s2[j]=='i')
   {count2+=1;}
   else if(s2[j]=='J' || s2[j]=='j')
   {count2+=8;}
   else if(s2[j]=='K' || s2[j]=='k')
   {count2+=5;}
   else if(s2[j]=='L' || s2[j]=='l')
   {count2+=1;}
   else if(s2[j]=='M' || s2[j]=='m')
   {count2+=3;}
   else if(s2[j]=='N' || s2[j]=='n')
   {count2+=1;}
   else if(s2[j]=='O' || s2[j]=='o')
   {count2+=1;}
   else if(s2[j]=='P' || s2[j]=='p')
   {count2+=3;}
   else if(s2[j]=='Q' || s2[j]=='q')
   {count2+=10;}
   else if(s2[j]=='R' || s2[j]=='r')
   {count2+=1;}
   else if(s2[j]=='S' || s2[j]=='s')
   {count2+=1;}
   else if(s2[j]=='T' || s2[j]=='t')
   {count2+=1;}
   else if(s2[j]=='U' || s2[j]=='u')
   {count2+=1;}
   else if(s2[j]=='V' || s2[j]=='v')
   {count2+=4;}
   else if(s2[j]=='W' || s2[j]=='w')
   {count2+=4;}
   else if(s2[j]=='X' || s2[j]=='x')
   {count2+=8;}
   else if(s2[j]=='Y' || s2[j]=='y')
   {count2+=4;}
   else if(s2[j]=='Z' || s2[j]=='z')
   {count2+=10;}
   else
   {count2+=0;}
  }
 if(count1>count2)
 {cout<<"Player1 wins!";}
 else if(count2>count1)
 {cout<<"Player2 wins!";}
 else
 {cout<<"Tie!";}
}
