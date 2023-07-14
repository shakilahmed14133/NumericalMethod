#include<bits/stdc++.h>
using namespace std;
double func(double x)
{
    return (exp(-x)/10);
}
int main()
{
    double x=0, y=0;
    x=func(x);

    while(abs(x-y)>0.001)
    {
        y=x;
        x=func(x);
    }

    cout<<x<<endl;


}