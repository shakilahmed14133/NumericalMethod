#include<bits/stdc++.h>
using namespace std;
int main()
{
    cout<<"Please enter the number of equation"<<endl;

    int n;
    cin>>n;

    double mat[n][n+1];

    cout<<"Enter the matrix"<<endl;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n+1;j++)
        {
            cin>>mat[i][j];
        }
    }
    double temp;
    for(int i=0;i<n;i++)
    {

        for(int j=i+1;j<n;j++)
        {
            temp = mat[j][i]/mat[i][i];
            for(int k=0;k<n+1;k++)
            {
                mat[j][k] = mat[j][k]-temp*mat[i][k];
            }
        }
    }

    for(int i=n-1;i>=0;i--)
    {
        for(int j=i-1;j>=0;j--)
        {
            temp = mat[j][i]/mat[i][i];
            for(int k=n;k>=0;k--)
            {
                mat[j][k] = mat[j][k] - temp*mat[i][k];

            }
        }
    }

    for(int i=0;i<n;i++)
    {
        temp=mat[i][i];
        for(int k=0;k<n+1;k++)
        {
            mat[i][k]=mat[i][k]/temp;
        }
    }

    cout<<"Answer is:"<<endl;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n+1;j++)
        {
            if(mat[i][j]==-0)
               mat[i][j]=0;
              
            printf("%5.1f",mat[i][j]);
        }
        cout<<endl;
    }
    
}