#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
#define _ ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int min(int arr[],int m,int n){
    ll table[n+1];
    //memset(table,INT_MAX,sizeof(table));
    for(int i=1;i<=n;i++){
        table[i]=INT_MAX;
    }
    //cout<<table[n]<<" ";
    table[0]=0;
    for(int i=1;i<=n;i++){
        for(int j=0;j<m;j++){
            if(arr[j]<=i){
                int sub_res=table[i-arr[j]];
                if(sub_res!=INT_MAX&&sub_res+1<table[i]){
                    table[i]=sub_res+1;

                }
            }
        }
    }
    //cout<<table[n]<<"\n";
    return table[n];

}

int main(){
    int arr[]{1,3,4};
    int n;cin>>n;
    cout<<min(arr,3,n);
}