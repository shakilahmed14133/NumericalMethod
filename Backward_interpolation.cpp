#include<bits/stdc++.h>
using namespace std;
int fact(int n)
{
    int temp=1;
    for(int i=1;i<=n;i++)
    {
        temp=temp*i;
    }

    return temp;
}
double u_cal(double u,int n)
{
     double sum=u;

     for(int i=1;i<n;i++)
     {
        sum=sum*(u+i);
     }

     return sum;
}
int main()
{
    int n;
    cout<<"Please enter the number of elements"<<endl;
    cin>>n;
    double x[n];

    cout<<"Please enter all the value of x"<<endl;

    for(int i=0;i<n;i++)
      cin>>x[i];

      double y[n][n];

      cout<<"Please enter all the value of y"<<endl;

      for(int i=0;i<n;i++)
      {
        cin>>y[i][0];
      }

      for(int i=1;i<n;i++)
      {
        for(int j=i;j<n;j++)
        {
            y[j][i]=y[j][i-1]-y[j-1][i-1];
        }

      }

      cout<<"Backward difference table is :"<<endl;

      for(int i=0;i<n;i++)
      {
        cout<<setw(4)<<x[i]<<"\t";
        for(int j=0;j<(i+1);j++)
        {
            cout<<setw(4)<<y[i][j]<<"\t";
        }
        cout<<endl;
      }

      double x1;
      cout<<"please enter the value of x to be find out it's corresponding value of y"<<endl;
      cin>>x1;
      double u = (x1-x[n-1])/(x[1]-x[0]);
       cout<<u<<endl;
      
      double sum= y[n-1][0];

      for(int i=1;i<n;i++)
      {
          sum=sum+(y[n-1][i]*u_cal(u,i))/fact(i);
      }

      cout<<"the value of x is:"<<sum<<endl;

}
