#include<iostream>
#include<string>
using namespace std;
class student
{
 private:
     string name;
     string section;
     string roll_no;
     int marks;
     char grade;
 public:
    void set_data()
    {
     string n;
     cout<<"Enter name:";
     getline(cin,n);
     name=n;
     string s;
     cout<<"Enter section:";
     cin>>s;
     section=s;
     string r;
     cout<<"Enter roll no.:";
     cin>>r;
     roll_no=r;
     cout<<endl;
    }
    void cal_grade(int TM)
    {
     if(TM>=90)
     {grade='A';}
     else if(TM>80)
     {grade='B';}
     else if(TM>70)
     {grade='C';}
     else if(TM>60)
     {grade='D';}
     else if(TM>50)
     {grade='E';}
     else
     {grade='F';}
    }
    void show_data(int M)
    {marks=M;
     cout<<"Student info:"<<endl<<endl;
     cout<<"Name:"<<name<<endl;
     cout<<"Section:"<<section<<endl;
     cout<<"Roll no:"<<roll_no<<endl;
     cout<<"Marks:"<<marks<<endl;
     cout<<"Grade:"<<grade<<endl;
    }

};
int main()
{
 student s;
 s.set_data();
 int m;
 cout<<"Enter marks (out of 100):";
 cin>>m;
 cout<<endl;
 s.cal_grade(m);
 s.show_data(m);
 return 0;
}