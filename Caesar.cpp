#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int key;
    cout<<"Enter the key:";
    cin>>key;
    cin.ignore();
    string plaintext;
    cout<<"Enter a plaintext:";
    getline(cin,plaintext);
    int n=plaintext.length();
    char c[n];
    int p[26];
    for(int c0=0;c0<26;c0++)
    {p[c0]=c0;}
    char Alp[26];
    int A=65;
    for(int c2=0;c2<26;c2++)
    {Alp[c2]=(char)A;
    A++;}
    char alp[26];
    int a=97;
    for(int c3=0;c3<26;c3++)
    {alp[c3]=(char)a;
    a++;}
    for(int j=0;j<n;j++)
    {if(plaintext[j]>='A' && plaintext[j]<='Z')
    {
     for(int g=0;g<26;g++)
     {if(plaintext[j]==Alp[g])
     {c[j]=(p[g]+key)%26;}
     }
     for(int y=0;y<26;y++)
     {if(c[j]==p[y])
     {c[j]=Alp[y];}
     }
    }
    else if(plaintext[j]>='a' && plaintext[j]<='z')
    {
     for(int f=0;f<26;f++)
     {if(plaintext[j]==alp[f])
     {c[j]=(p[f]+key)%26;}
     }
     for(int z=0;z<26;z++)
     {if(c[j]==p[z])
     {c[j]=alp[z];}
     }
    }
    else
    {c[j]=plaintext[j];}
    }
    cout<<endl<<"Ciphertext:";
    for(int u=0;u<n;u++)
    cout<<c[u];
}