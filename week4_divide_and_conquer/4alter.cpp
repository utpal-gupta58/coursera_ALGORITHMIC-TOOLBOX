#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
#define _ ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int swapi =0;
void merge(ll arr[],int l,int m,int r,ll temp[]){
    int i=l,j=m+1,k=l;
    int swap=0;
    //int temp[r-l+1];
    while(i<=m&&j<=r){
        if(arr[i]<=arr[j]){
            temp[k++]=arr[i++];
        }
        else{
            temp[k++]=arr[j++];
            swapi+=m-i+1;
            //cout<<i<<" "<<m<<" "<<arr[i]<<" "<<arr[j-1]<<"\n";
        }
    }
    while(i<=m){
        temp[k++]=arr[i++];
    }
    while(j<=r){
        temp[k++]=arr[j++];
    }
    for (i = l; i <= r; i++) 
		arr[i] = temp[i]; 
   // return swap;
}
void mergesort(ll arr[],ll temp[],int l, int r){
    int swap=0;
    if(r>l){
        int m=l+((r-l)/2);
        mergesort(arr,temp,l,m);
        mergesort(arr,temp,m+1,r);

        merge(arr,l,m,r,temp);
    }
   //return swap; 
}

int main(){
    ll n;
    cin>>n;
    ll arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    ll temp[n];
    mergesort(arr,temp,0,n-1);
    // for(int i=0;i<n;i++){
    //     cout<<arr[i]<<" ";
    // }
    //cout<<endl;
    
    cout<<swapi;
}