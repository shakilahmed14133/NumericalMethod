#include<bits/stdc++.h>
using namespace std;
#define int long long
main()
{
ios_base::sync_with_stdio(false); 
   cin.tie(NULL); 
   cout.tie(NULL);
    int t;
    cin>>t;
    while (t--)
    {
        int n,m;
        cin>>n>>m;

        int col[m];
        int sum=0;
        for(int i=0;i<m;i++)
        {
            cin>>col[i];
            sum=sum+col[i];
        }

        int d1,d2;

        d1=sum/n;
        d2=sum%n;

        if(d1==(m-1))
          cout<<d2<<endl;
        else if(d1==m)
          cout<<m<<endl;
        else
           cout<<0<<endl;
     
     
    }
    
}