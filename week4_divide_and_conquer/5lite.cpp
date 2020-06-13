#include<bits/stdc++.h>
using namespace std ;
#define ll long long int 
#define _ ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int main(){
    ll n,s;
    cin>>n>>s;
    ll arr[s];
    vector<pair<ll,ll>> vec,temp;
    int a[s]={0};
    for(int i=0;i<n;i++){
        ll x,y;
        cin>>x>>y;
        vec.push_back(make_pair(x,1));
        vec.push_back(make_pair(y+1,-1));
    }
    sort(vec.begin(),vec.end(),greater<pair<ll,ll>>());
    for(int i=0;i<s;i++){
        ll t;
        cin>>t;
        temp.push_back(make_pair(t,i));

    }
    sort(temp.begin(),temp.end());
    int count=0;
    for(int i=0;i<s;i++){
        ll x=temp[i].first;

        while(!vec.empty()&&vec.back().first<=x){
            count+=vec.back().second;
            vec.pop_back();
        }
        a[temp[i].second]=count;
    }
    for(int i=0;i<s;i++){
        cout<<a[i]<<" ";}
}