#include <iostream>
using namespace std;
void Rhombus_star_pattern(int N)
{
 int i,j,k;
 for(i=N;i>=1;i--)
{for(k=i;k>=1;k--)
   cout<<" ";
   {for(j=N;j>=1;j--)
   cout<<"*";}
   cout<<endl;
}

}

void Hollow_Rhombus_star_pattern(int N)
{
  int i,j,k;
  for(i=1;i<=N;i++)
  {for(k=1;k<=i;k++)
   cout<<" ";
    for(j=1;j<=N;j++)
    if(j==1||j==N||i==1||i==N)
    cout<<"*";
    else
    cout<<" ";
    cout<<endl;}

}

void Mirrored_Rhombus_star_pattern(int N)
{
 int i,j,k;
 for(i=1;i<=N;i++)
{for(k=i;k>=1;k--)
   cout<<" ";
   {for(j=N;j>=1;j--)
    cout<<"*";}
    cout<<endl;}

}

void Hollow_Mirrored_Rhombus_star_pattern(int N)
{
  int i,j,k;
  for(i=1;i<=N;i++)
  {for(k=1;k<=i;k++)
   cout<<" ";
    for(j=1;j<=N;j++)
    if(j==1||j==N||i==1||i==N)
    cout<<"*";
    else
    cout<<" ";
    cout<<endl;}

}

void Right_triangle_star_pattern(int N)
{ int i,j;
 for(i=1;i<=N;i++)
 {for(j=1;j<=i;j++)
   cout<<"*";
  cout<<endl;}

}

void Hollow_Right_triangle_star_pattern(int N)
{ int i,j,k;
 for(i=1;i<=N;i++)
 {for(j=1;j<=i;j++)
 if(i==1||i==N||j==1||j==i)
  cout<<"*";
  else
  {cout<<" ";}
  cout<<endl;}
}

void Mirrored_Right_triangle_star_pattern(int N)
{
    int i,j,k;
    for(i=1;i<=N;i++)
    {for(j=i;j<=N;j++)
     cout<<" ";
     for(k=1;k<=i;k++)
     cout<<"*";
     cout<<endl;}
     cout<<endl;

}

void Hollow_Mirrored_Right_triangle_star_pattern(int N)
{
    int i,j,k;
    for(i=1;i<=N;i++)
    {for(j=i;j<=N;j++)
     cout<<" ";
     for(k=1;k<=i;k++)
     if(i==1||i==N||k==1||k==i)
     cout<<"*";
     else
     cout<<" ";
     cout<<endl;}
     cout<<endl;

}

void Inverted_right_triangle_star_pattern(int N)
{ int i,j;
 for(i=N;i>=1;i--)
 {for(j=i;j>=1;j--)
  cout<<"*";
  cout<<endl;}

}

void Hollow_Inverted_right_triangle_star_pattern(int N)
{ int i,j;
 for(i=N;i>=1;i--)
 {for(j=i;j>=1;j--)
  if(i==N||i==1||j==1||j==i)
  cout<<"*";
  else
  cout<<" ";
  cout<<endl;}

}

void Inverted_Mirrored_right_triangle_star_pattern(int N)
{ int i,j,k;
 for(i=1;i<=N;i++)
 {for(k=1;k<=i;k++)
   cout<<" ";
  for(j=N;j>=i;j--)
  cout<<"*";
  cout<<endl;}

}

void Hollow_Inverted_Mirrored_right_triangle_star_pattern(int N)
{ int i,j,k;
 for(i=1;i<=N;i++)
 {for(k=1;k<=i;k++)
   cout<<" ";
  for(j=N;j>=i;j--)
  if(i==1||i==N||j==N||j==i)
  cout<<"*";
  else
  cout<<" ";
  cout<<endl;}

}

void Pyramid_star_pattern(int N)
{
  int i,k,j,R;
  R=N*2;
  for(i=1;i<=R;i+=2)
  {for(k=i;k<=R;k+=2)
   cout<<" ";
   for(j=1;j<=i;j++)
   cout<<"*";
   cout<<endl;}

}


void Hollow_Pyramid_star_pattern(int N)
{
  int i,k,j,R;
  R=N*2;
  for(i=1;i<=R;i+=2)
  {for(k=i;k<=R;k+=2)
   cout<<" ";
   for(j=1;j<=i;j++)
   if(j==1||j==i||i==R-1)
   cout<<"*";
   else
   cout<<" ";
   cout<<endl;}

}

void Inverted_Pyramid_star_pattern(int N)
{
   int i,k,j,R;
   R=N*2;
   for(i=1;i<=R;i+=2)
   {for(k=i;k>=1;k-=2)
    cout<<" ";
    for(j=R-1;j>=i;j--)
    cout<<"*";
    cout<<endl;}

}


void Hollow_Inverted_Pyramid_star_pattern(int N)
{
   int i,k,j,R;
   R=N*2;
   for(i=1;i<=R;i+=2)
   {for(k=i;k>=1;k-=2)
    cout<<" ";
    for(j=R-1;j>=i;j--)
    if(j==R-1||j==i||i==1)
    cout<<"*";
    else
    cout<<" ";
    cout<<endl;}

}

void Half_diamond_star_pattern(int N)
{
    int i,j,c;
    c=1;
    for(i=1;i<N*2;i++)
    {for(j=1;j<=c;j++)
    {cout<<"*";}
     if(i<N)
    {c++;}
    else
    {c--;}
    cout<<endl;}

}

void Mirrored_Half_diamond_star_pattern(int i)
{
 int j,k,c,l,p;
 c=i;
 p=1;
 for(j=1;j<=i*2;j++)
 {for(k=c;k>=1;k--)
  cout<<" ";
  for(l=1;l<=p;l++)
  cout<<"*";
  if(j<i)
  {c--;
  p++;}
  else
  {c++;
  p--;}
  cout<<endl;
 }

}

void Diamond_star_pattern(int i)
{
 int j,k,c,l,p;
 c=i;
 p=0;
 for(j=1;j<=i*2;j++)
 {for(k=c;k>=1;k--)
  cout<<" ";
  for(l=0;l<=p*2;l++)
  cout<<"*";
  if(j<i)
  {c--;
  p++;}
  else
  {c++;
  p--;}
  cout<<endl;
 }

}

void Hollow_Diamond_star_pattern(int i)
{
 int j,k,c,l,p,r;
 c=i;
 p=0;
 for(j=1;j<=i*2-1;j++)
 {for(k=c;k>=1;k--)
  cout<<"*";
  for(l=1;l<=p*2;l++)
  cout<<" ";
  for(r=1;r<=c;r++)
  cout<<"*";
  if(j<i)
  {c--;
  p++;}
  else
  {c++;
  p--;}
  cout<<endl;
 }

}

void Right_Arrow_star_pattern(int i)
{

    int c=1;
    int l=i;
    for(int k=1;k<i*2;k++)
    {for(int j=1;j<=c;j++)
    cout<<" ";
    for(int h=l;h>=1;h--)
    {cout<<"*";}
    if(k<i)
    {c+=2;
     l--;}
    else
    {c-=2;
     l++;}
    cout<<endl;}

}

void Left_Arrow_star_pattern(int i)
{
    int c=i;
    int l=i;
    for(int k=1;k<i*2;k++)
    {for(int j=c-1;j>=1;j--)
    cout<<" ";
    for(int h=l;h>=1;h--)
    {cout<<"*";}
    if(k<i)
    {c--;
     l--;}
    else
    {c++;
     l++;}
    cout<<endl;}

}

void Plus_star_pattern(int i)
{
  int j,k,h,p;
  for(k=1;k<=i*2;k++)
  {if(k==i)
  for(p=1;p<=i*2;p++)
  cout<<"*";
  else
  {for(j=1;j<=i;j++)
  {cout<<" ";}
  }
  for(h=1;h<=1;h++)
  {cout<<"*";}
  cout<<endl;
 }

}

void X_star_pattern(int i)
{
    int j,k,h;
    int c=1;
    int l=i;
    for(j=1;j<=i*2-1;j++)
    {for(k=1;k<=c;k++)
    {cout<<" ";}
    if(j<i)
    {c++;}
    else
    {c--;}
    for(h=l*2-1;h>=1;h--)
    {if(h==l*2-1 || h==1)
    cout<<"*";
    else
    cout<<" ";
    }
    if(j<i)
    {l--;}
    else
    {l++;}
    cout<<endl;}

}

void Eight_star_pattern(int i)
{
  int j,k,h;
  for(j=1;j<=i*2-1;j++)
{if(j==i||j==1||j==i*2-1)
  {for(h=2;h<=i;h++)
  { if(h==2)
      {cout<<" ";}
      else
      {cout<<"*";}
  }
  }
  else
  {for(k=1;k<=i;k++)
  if(k==1||k==i)
  {cout<<"*";}
  else
  {cout<<" ";}
  }
  cout<<endl;}

}

void Heart_star_pattern(int i)
{
 int j,k,c,l,p;
 c=i;
 p=0;
 for(j=1;j<=i*2;j++)
 {for(k=c+4;k>=1;k--)
  cout<<" ";
  for(l=0;l<=p*2;l++)
  {if(j<i-2)
  {cout<<" ";}
  else if((j==i-2)&&((l==p-1)||(l==p+1)||(l==p)||(l==p-2)||(l==p+2)) )
    {cout<<" ";}
  else if((j==i-1)&&((l==p+1)||(l==p-1)||(l==p)))
    {cout<<" ";}
   else if((j==i)&&(l==p))
    {cout<<" ";}
  else
  {cout<<"*";}
  }
  if(j<i)
  {c--;
  p++;}
  else
  {c++;
  p--;}
  cout<<endl;
 }

}

int main()
{
    int r=0;
    cout<<"Enter the Rows:";
    cin>>r;
    for(int S=1;S<=27;S++)
    {system("cls");
    if(S==1)
    {Rhombus_star_pattern(r);}
    else if(S==2)
    {Hollow_Rhombus_star_pattern(r);}
    else if(S==3)
    {Mirrored_Rhombus_star_pattern(r);}
    else if(S==4)
    {Hollow_Mirrored_Rhombus_star_pattern(r);}
    else if(S==5)
    {Right_triangle_star_pattern(r);}
    else if(S==6)
    {Hollow_Right_triangle_star_pattern(r);}
    else if(S==7)
    {Mirrored_Right_triangle_star_pattern(r);}
    else if(S==8)
    {Hollow_Mirrored_Right_triangle_star_pattern(r);}
    else if(S==9)
    {Inverted_right_triangle_star_pattern(r);}
    else if(S==10)
    {Hollow_Inverted_right_triangle_star_pattern(r);}
    else if(S==11)
    {Inverted_Mirrored_right_triangle_star_pattern(r);}
    else if(S==12)
    {Hollow_Inverted_Mirrored_right_triangle_star_pattern(r);}
    else if(S==13)
    {Pyramid_star_pattern(r);}
    else if(S==14)
    {Hollow_Pyramid_star_pattern(r);}
    else if(S==15)
    {Inverted_Pyramid_star_pattern(r);}
    else if(S==16)
    {Hollow_Inverted_Pyramid_star_pattern(r);}
    else if(S==17)
    {Half_diamond_star_pattern(r);}
    else if(S==18)
    {Mirrored_Half_diamond_star_pattern(r);}
    else if(S==19)
    {Diamond_star_pattern(r);}
    else if(S==20)
    {Hollow_Diamond_star_pattern(r);}
    else if(S==21)
    {Right_Arrow_star_pattern(r);}
    else if(S==22)
    {Left_Arrow_star_pattern(r);}
    else if(S==23)
    {Plus_star_pattern(r);}
    else if(S==24)
    {X_star_pattern(r);}
    else if(S==25)
    {Eight_star_pattern(r);}
    else if(S==26)
    {Heart_star_pattern(r);}
    else
    {cout<<endl<<endl<<endl<<endl<<"\t"<<"\t"<<"THE END:)"<<endl<<endl<<endl<<endl;}
    for(volatile int i=0;i<900000000;i++)
    {}
    }
    return 0;
}
