#include<bits/stdc++.h>
using namespace std;
double func(double x)
{
    return (x*x*x-x-1);
}
int main()
{
    double a=0,b=100,c;

    for(int i=a;i<=b;i++)
    {
        if(func(i)*func(i+1)<=0)
        {
            a=i;
            b=i+1;
            break;
        }
    }
    if(func(a)==0)
      c=a;
    else if(func(b)==0)
      c=b;
    else
    while((b-a)>0.000001)
    {
       c=(a+b)/2;
       if(func(c)==0)
        {
            break;
        }
       if(func(c)*func(a)<=0)
       {
          b=c;
       }
       else
       {
          a=c;
       }
    }

    cout<<c<<endl;

}