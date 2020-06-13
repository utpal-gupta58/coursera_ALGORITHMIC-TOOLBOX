#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
#define _ ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

ll dp[301][10001];
int main(){_
    ll w,n;
    cin>>w>>n;
    ll arr[n];
    for(ll i=0;i<n;i++){
        cin>>arr[i];
    }
    
    for(ll i=0;i<=n;i++){
        for(ll j=0;j<=w;j++){
            if(i==0||j==0){
                dp[i][j]=0;
            }
            else {

                dp[i][j]=dp[i-1][j];
                if(arr[i-1]<=j){
                    if(dp[i-1][j-arr[i-1]]+arr[i-1]>dp[i][j]){
                        dp[i][j]=dp[i-1][j-arr[i-1]]+arr[i-1];
                    }
                }
            }
        }
    }
           
    cout<<dp[n][w];
}