#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
#define _ ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

void gcm(ll x, ll y){
    if(y==0){cout<<x;return;}
    if(x==0){cout<<y;return;}
    if(y==x){cout<<x;return;}
    ll r=x%y;
    gcm(y,r);

}



int main(){_
     ll x,y;
     cin>>x>>y;
     gcm(x,y);

}