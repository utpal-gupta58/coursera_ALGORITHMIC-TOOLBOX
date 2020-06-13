#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
#define _ ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);


int main(){_
    int n,m;
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
    int dp[n+1][m+1];

    for(int i=0;i<=n;i++){
        for(int j=0;j<=m;j++){
            if(i==0)
            dp[i][j]=0;
            else if(j==0)
            dp[i][j]=0;
            else if(a[i-1]==b[j-1])
            dp[i][j]=dp[i-1][j-1]+1;
            else {
                
                //dp[i][j]=max(dp[i-1][j-1],max(dp[j-1][i],dp[i-1][j]));
                dp[i][j]=max(dp[i][j-1],dp[i-1][j]);
                //cout<<dp[i][j]<<"\n";
            }
        }
    }
          
    cout<<dp[n][m];
    
}