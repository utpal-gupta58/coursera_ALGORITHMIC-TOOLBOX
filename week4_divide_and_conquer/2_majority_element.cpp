#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define _ ios_base::sync_with_base(false);cin.tie(NULL);cout.tie(NULL);


int main(){
    ll n;
    cin>>n;
    ll c=(n/2)+1;
    map<ll,ll>mp;
    for(int i=0;i<n;i++){
       ll t;
        cin>>t;
        mp[t]++;
    }
    int count=0;
    for(const auto &i: mp){
        if(i.second>=c){
            count++;
        }
    }
    cout<<count;
}