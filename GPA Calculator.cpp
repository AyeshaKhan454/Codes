#include<iostream>
#include<string>
using namespace std;
class arraysAndVariables
{
 public:
 string subjects[6];
 float array1[6];
 float variable=0;
 float printVariable(arraysAndVariables VAR)
 {
     cout<<VAR.variable;
 }
};
int main()
{
    //Subjects Names
    arraysAndVariables sub;
    sub.subjects[6];
    cout<<"Enter 6 subjects name:"<<endl;
    for(int u=0;u<6;u++)
    {cin>>sub.subjects[u];}
    //Subject's Grades and Credit hours
    arraysAndVariables grade;
    arraysAndVariables CreditHours;
    cout<<"   Enter grade and Credit hours according to subjects   "<<endl<<endl;
    for(int v=0;v<6;v++)
    {cout<<"Grade of "<<sub.subjects[v]<<":";
    cin>>grade.subjects[v];
    cout<<endl;
    cout<<"Credit hour of "<<sub.subjects[v]<<":";
    cin>>CreditHours.array1[v];
    cout<<endl<<endl;}
    //Grades(char) into Points(float)
    arraysAndVariables GradeToPoints;
    for(int e=0;e<6;e++)
    {if(grade.subjects[e]=="A+")
    {GradeToPoints.array1[e]=4.00;}
    else if(grade.subjects[e]=="A-"||grade.subjects[e]=="A")
    {GradeToPoints.array1[e]=3.75;}
    else if(grade.subjects[e]=="B+")
    {GradeToPoints.array1[e]=3.50;}
    else if(grade.subjects[e]=="B-"||grade.subjects[e]=="B")
    {GradeToPoints.array1[e]=3.00;}
    else if(grade.subjects[e]=="C+")
    {GradeToPoints.array1[e]=2.50;}
    else if(grade.subjects[e]=="C-"||grade.subjects[e]=="C")
    {GradeToPoints.array1[e]=2.00;}
    else if(grade.subjects[e]=="D+")
    {GradeToPoints.array1[e]=1.50;}
    else if(grade.subjects[e]=="D-"||grade.subjects[e]=="D")
    {GradeToPoints.array1[e]=1.00;}
    else
    {GradeToPoints.array1[e]=0.00;}
    }
    //Grade points= Grade X Credit Hours
    arraysAndVariables GradePoint;
    for(int r=0;r<6;r++)
    {GradePoint.array1[r]=GradeToPoints.array1[r]*CreditHours.array1[r];}
    //Grade Point Sum
    arraysAndVariables GradeSum;
    for(int s=0;s<6;s++)
    {GradeSum.variable+=GradePoint.array1[s];}
    //Credit Hour Sum
    arraysAndVariables CreditHourSum;
    for(int t=0;t<6;t++)
    {CreditHourSum.variable+=CreditHours.array1[t];}
    //Final GPA
    arraysAndVariables GPA;
    GPA.variable=(GradeSum.variable/CreditHourSum.variable);
    arraysAndVariables PR;
    cout<<"Total GPA is:";
    PR.printVariable(GPA);
    return 0;
}




