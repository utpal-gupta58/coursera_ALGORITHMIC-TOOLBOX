#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
#define _ ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int lcs(int a[],int b[],int c[],int n,int m,int p){
    int dp[n+1][m+1][p+1];

    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=m;j++)
        {
            for(int k=0;k<=p;k++)
            {
            if(i==0||j==0||k==0)
            dp[i][j][k]=0;
            else if(a[i-1]==b[j-1] && a[i-1]==c[k-1])
            dp[i][j][k]=dp[i-1][j-1][k-1]+1;
            else {
                
                //dp[i][j]=max(dp[i-1][j-1],max(dp[j-1][i],dp[i-1][j]));
                dp[i][j][k]=max(max(dp[i][j-1][k],dp[i-1][j][k]),dp[i][j][k-1]);
                //cout<<dp[i][j]<<"\n";
            }
        }
        }
    }
    
   
    return dp[n][m][p];
}

int main(){_
    int n,m,p;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cin>>m;
    int b[m];
    for(int i=0;i<m;i++){
        cin>>b[i];
    }
    cin>>p;
    int c[p];
    for(int i=0;i<p;i++){
        cin>>c[i];
        //cout<<c[i];

    }
          // cout<<n<<m<<p;
    cout<<lcs(a,b,c,n,m,p);
}