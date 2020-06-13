#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
#define _ ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int main(){
    ll n;
    cin>>n;
    ll a[n],b[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    sort(b,b+n);
    ll sum=0;
    for(int i=0;i<n;i++){
        sum+=(a[i]*b[i]);
    }
    cout<<sum;
}