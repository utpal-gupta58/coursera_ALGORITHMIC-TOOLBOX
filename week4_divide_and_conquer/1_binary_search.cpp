#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
#define _ ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int binary(ll arr[],ll l,ll r,ll t){
    if(l>r){
        return -1;
    }
    int i=l+((r-l)/2);
    if(arr[i]==t){
        return i;
    }
    else{
        if(arr[i]>t){
            binary(arr,l,i-1,t);
        }
        else{
            binary(arr,i+1,r,t);
        }
    }

}

int main(){_
    ll n,k;
    cin>>n;
    ll arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cin>>k;
    ll chk[k];
    for(int i=0;i<k;i++){
        cin>>chk[i];
        ll t=chk[i];
        cout<<binary(arr,0,n-1,t)<<" ";
    }
}