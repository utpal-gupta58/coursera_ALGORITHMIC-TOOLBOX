#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
#define _ ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

ll gcm(ll x, ll y){
    if(y==0){return x;}
   
    ll r=x%y;
    gcm(y,r);

}
void lcm(ll x,ll y){
    ll l=gcm(x,y);
    cout<<((x*y)/l);
}




int main(){_
     ll x,y;
     cin>>x>>y;
     lcm(x,y);

}