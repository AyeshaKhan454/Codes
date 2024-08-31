
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string sentence;
    cout<<"Enter a sentence:";
    getline(cin,sentence);
    string Asent[sentence.length()];
    for(int u=0;u<sentence.length();u++)
    {for(int c=65;c<=90;c++)
    {if(sentence[u]==(char)c)
    sentence[u]=sentence[u]+(char)32;}}
    string str;
    for(int r=0;r<sentence.length();r++)
    {if( (sentence[r]>=(char)97)&&(sentence[r]<=(char)122) )
    {str+=sentence[r];}
    }
    cout<<"In original order:";
    for(int e=0;e<str.length();e++)
    {cout<<str[e];}
    cout<<endl;
    cout<<"In reverse order:";
    for(int k=str.length()-1;k>=0;k--)
    {cout<<str[k];}
    cout<<endl;
     int count=0;
     for(int u=0;u<str.length();u++)
     if(str[u]==str[(str.length()-1)-u])
     {count++;}
    if(count==str.length())
    {cout<<"It is palindrome!";}
    else
    {cout<<"It is not a palindrome!";}
    return 0;
}
