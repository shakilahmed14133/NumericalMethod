#include<bits/stdc++.h>
using namespace std;
double up_cal(double x[],double value,int n,int j)
{
      double sum=1;
      for(int i=0;i<n;i++)
      {
        if(i==j)
         continue;
        
        sum=sum*(value-x[i]);
      }

      return sum;


}
double down_cal(double x[],int n,int j)
{
    double sum=1;
    for(int i=0;i<n;i++)
    {
        if(i==j)
         continue;

         sum=sum*(x[j]-x[i]);
    }

    return sum;
}
int main()
{
    int n;
    cout<<"Please enter the number of element"<<endl;
    cin>>n;
    double x[n],y[n];
    cout<<"Please enter all value of x"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>x[i];
    }
    cout<<"Please enter all value of y"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>y[i];
    }
 
    double value,ans=0;

    cout<<"Please enter the value to be find "<<endl;

    cin>>value;

    for(int i=0;i<n;i++)
    {
       ans=ans + up_cal(x,value,n,i)*y[i]/down_cal(x,n,i);
    }

    cout<<"The value of "<<value<<" is: "<<ans<<endl;

} 