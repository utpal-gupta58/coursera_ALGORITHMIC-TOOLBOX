#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
#define _ ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);


int main(){_
    int n;
    cin>>n;
    int arr[n];
    int sum=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        sum+=arr[i];
    }
          // cout<<sum<<" ";
    if(sum<3){cout<<0;return 0;}
    if(sum%3!=0){cout<<0;return 0;}
    int w=sum/3;
    int dp[n+1][w+1];
    int count=0;
    for(int i=0;i<=n;i++){
        for(int j=0;j<=w;j++){
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
                if(dp[i][j]==w){count++;}
            }
        }
    }
           //cout<<count<<" "; 
    if(count<3){cout<<0;return 0;}
    else{cout<<1;return 0;}
    //cout<<dp[n][w];
}