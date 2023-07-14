#include<bits/stdc++.h>
using namespace std;
int fac(int n)
{
    int temp=1;
    for(int i=1;i<=n;i++)
       temp=temp*i;


       return temp;
      
}
float u_cal(float u,int n)
{
    float temp=u;
    for(int i=1;i<n;i++)
    {
        temp=temp*(u-i);
    }
    return temp;
}
int main()
{
     int n;
    cout<<"Enter the number of elements:"<<endl;
    cin>>n;
    float x[n];
    cout<<"Please enter all the value of x"<<endl;
     for(int i=0;i<n;i++)
     {
        cin>>x[i];
     } 

     float y[n][n];

     cout<<"Please enter all the value of y"<<endl;
      
      for(int i=0;i<n;i++)
      {
         cin>>y[i][0];
      }

      for(int i=1;i<n;i++)
      {
         for(int j=0;j<n-i;j++)
         {
            y[j][i]=y[j+1][i-1]-y[j][i-1];
         }
      }
      cout<<"forward difference table is given below:"<<endl;
      for(int i=0;i<n;i++)
      {
        cout<<setw(4)<<x[i]<<"\t";
        for(int j=0;j<n-i;j++)
        {
            cout<<setw(4)<<y[i][j]<<"\t";
        }
        cout<<endl;
      }

      float x1;

      cout<<"Enetr the number of x to find out it's corresponding value of y"<<endl;

      cin>>x1;
      float sum=y[0][0];
      float u=(x1-x[0])/(x[1]-x[0]);

      for(int i=1;i<n;i++)
      {
         sum=sum+ y[0][i]*u_cal(u,i)/fac(i);
      }

      cout<<sum<<endl;


}