#include<bits/stdc++.h>
using namespace std;
double cal_value(double x[],int n,double value)
{
    double temp=1;
    for(int i=0;i<n;i++)
    {
        temp=temp*(value-x[i]);
    }
   return temp;
}
int main()
{
    int n;
    cout<<"Please enter the number of elements"<<endl;
    cin>>n;
    double x[n],y[n][n];
    cout<<"Please enter the value of x"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>x[i];
    }
    cout<<"Please enter the value of y"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>y[i][0];
    }

    //calculating divided difference table

    for(int i=1;i<n;i++)
    {
        for(int j=0;j<n-i;j++)
        {
            y[j][i]=(y[j+1][i-1]-y[j][i-1])/(x[j+i]-x[j]);
        }
    }

    cout<<"Divided difference table is given below:"<<endl;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i;j++)
          {
            cout<<setw(4)<<y[i][j]<<"\t";
          }

          cout<<endl;
    }

    cout<<"please enter the value of x to be found"<<endl;
    double value;
    cin>>value;
    double sum=0;

    for(int i=0;i<n;i++)
    {
        sum= sum + cal_value(x,i,value)*y[0][i];
    }

    cout<<"value is:"<<sum<<endl;
}
