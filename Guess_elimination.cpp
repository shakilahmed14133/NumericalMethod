#include<bits/stdc++.h>
using namespace std;
int main()
{
    cout<< "Please enter the number of equation"<<endl;
    int n;
    cin>>n;

    double mat[n][n+1];

    cout<<"Please enter the matrix"<<endl;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n+1;j++)
        {
            cin>>mat[i][j];
        }
        
    }

    double temp;


   // calculating for forward elimination
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++)
        {
            temp = mat[j][i]/mat[i][i];
           for(int k=0;k<n+1;k++)
           {
              mat[j][k] = mat[j][k] - temp*mat[i][k];
           }
        }
    }

     double ans[n];
    // printing fo forward elimination matrix.

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n+1;j++)
         {
            cout<<mat[i][j]<<" ";
         }

         cout<<endl;
    }
      double sum;

      // calculating for the solutions of equations.
    for(int i=n-1;i>=0;i--)
    {
        sum=mat[i][n];

        for(int j=n-1;j>i;j--)
        {
            sum = sum - mat[i][j]*ans[j];
        }

        ans[i] = sum/mat[i][i];
        
    }
    // printing answers;
   cout<<"Answers are:"<<endl;
    for(int i=0;i<n;i++)
      cout<<ans[i]<<" ";



    
}