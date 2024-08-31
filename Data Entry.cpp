#include<iostream>
#include<string>
using namespace std;
class Student
{
private:
    string school;
    string degree;
public:
    void get_data()
    {
       cout<<"Enter school name:";
       cin>>school;
       cout<<"Enter degree:";
       cin>>degree;
       cout<<endl<<endl;

    }
    void put_data()
    {
       cout<<"School name is:"<<school<<endl;
       cout<<"Degree is:"<<degree<<endl<<endl;
    }
};
class Employee
{
private:
    string name;
    unsigned long number;
public:
    void get_data()
    {
      cout<<"Enter name:";
      cin>>name;
      cout<<"Enter number:";
      cin>>number;
      cout<<endl<<endl;
    }
    void put_data()
    {
       cout<<"Name is:"<<name<<endl;
       cout<<"Number is:"<<number<<endl<<endl;
    }
};
class manager
{
 private:
     string title;
     double dues;
     Employee emp;
     Student stu;
 public:
   void get_dataM()
    {
      cout<<"Enter title:";
      cin>>title;
      cout<<"Enter dues:";
      cin>>dues;
      cout<<endl;
      emp.get_data();
      stu.get_data();
    }
    void put_dataM()
    {
      cout<<"Title is:"<<title<<endl;
      cout<<"Dues are:"<<dues<<endl;
      emp.put_data();
      stu.put_data();
    }
};
class scientists
{
private:
    int pubs;
    Employee emp;
    Student stu;
public:
    void get_dataS()
    {
      cout<<"Enter Pubs:";
      cin>>pubs;
      emp.get_data();
      stu.get_data();
    }
    void put_dataS()
    {
     cout<<"Pubs are:"<<pubs<<endl;
     emp.put_data();
     stu.put_data();
    }

};
class laborer
{
private:
    Employee emp;
public:
    void get_dataL()
    {
      emp.get_data();
    }
    void put_dataL()
    {
      emp.put_data();
    }
};
int main()
{
  manager m;
  scientists s;
  laborer l;
  cout<<"The information of manager:"<<endl<<endl;
  m.get_dataM();
  cout<<endl<<endl;
  cout<<"The information of scientists:"<<endl<<endl;
  s.get_dataS();
  cout<<endl<<endl;
  cout<<"The information of laborer:"<<endl<<endl;
  l.get_dataL();
  cout<<endl<<endl;
  cout<<"Manager:"<<endl;
  m.put_dataM();
  cout<<"Scientists:"<<endl;
  s.put_dataS();
  cout<<"LaborerL:"<<endl;
  l.put_dataL();
  return 0;
}
