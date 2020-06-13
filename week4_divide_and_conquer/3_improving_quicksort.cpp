#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
#define _ ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int main(){_
    int n;
    cin>>n;
    ll arr[n];
    for(int i=0;i<n;i++){
        cin >>arr[i];
    }
    sort(arr,arr+n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}