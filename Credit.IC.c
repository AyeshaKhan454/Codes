#include<stdio.h>
int main(void)
{
    int num[16];
    printf("Enter 16-Digit number:\n");
    for(int i=0;i<16;i++)
    {scanf("%d",&num[i]);}
    int SM1=0;
    for(int j=1;j<16;j+=2)
    {SM1+=num[j];}
    int SM2=0;
    for(int k=0;k<15;k+=2)
    {if((num[k]*2)>9)
        {SM2+=(num[k]*2)-9;}
        else
        {SM2+=(num[k]*2);}
        }
    int SMT=0;
    SMT=SM1+SM2;
    if((SMT%10)==0)
    {if( (num[0]==3) && ( (num[1]==4) || (num[1]==7) ) )
    {printf("American Express");}
    else if( (num[0]==5) && ( (num[1]==1) || (num[1]==2) || (num[1]==3) || (num[1]==4) || (num[1]==5) ) )
    {printf("MasterCard");}
    else if(num[0]==4)
    {printf("VISA");}
    else
    {printf("INVALID");}
    }
    else
    {printf("INVALID");}
}
