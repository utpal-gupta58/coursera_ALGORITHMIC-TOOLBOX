#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
#define _ ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);


int main(){_
    string str1,str2;
    cin>>str1>>str2;
    int n=str1.length();
    int m=str2.length();
      //cout<<m<<" "<<n<<" ";
    int dp[n+1][m+1];
    for(int i=0;i<=n;i++){
        for(int j=0;j<=m;j++){
            if(i==0)
            dp[i][j]=j;
            else if(j==0)
            dp[i][j]=i;
            else if(str1[i-1]==str2[j-1]){
                dp[i][j] = dp[i - 1][j - 1];
            }
            else{
                dp[i][j]=1+min(min(dp[i-1][j],dp[i][j-1]),dp[i-1][j-1]);
            }
        }
    }
    cout<<dp[n][m];
}