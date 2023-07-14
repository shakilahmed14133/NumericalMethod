#include<bits/stdc++.h>
using namespace std;
double func(double x)
{
    return (x*x*x-2*x-5);
}
double d_func(double x)
{
    return (3*x*x-2);
}
int main()
{
     double x=0;

     while(abs(func(x))>0.0001)
     {
        x=x-func(x)/d_func(x);
     }

     cout<<x<<endl;
}