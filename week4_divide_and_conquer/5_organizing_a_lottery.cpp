#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define _ ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int c=0;
void  binary(ll search,int temp[],vector<pair<ll,ll>>vec,int l,int r,int i){
        if(l==r){
            if(vec[l].first<=search&&vec[l].second>=search){
           temp[i]++;
            //c++;
            
            //return count;
        }
            return;
        }
        int mid=(l+r)/2;
        if(mid==l){
           if(vec[mid].first<=search&&vec[mid].second>=search){
             temp[i]++;}
            if(vec[r].first<=search&&vec[r].second>=search){
             temp[i]++;}
            
            return;
        }
       // cout<<vec[mid].first<<"\n";
        if(vec[mid].first<=search&&vec[mid].second>=search){
            temp[i]++;//cout<<"mid ";
            //c++;
            binary(search,temp,vec,l,mid-1,i);
            binary(search,temp,vec,mid+1,r,i);
        }
        else if(vec[mid].first>search){
            binary(search,temp,vec,l,mid-1,i);
        }
        else if(vec[mid].second<search){
            binary(search,temp,vec,mid+1,r,i);
        }
    //cout<<c<<" ";
 
        

}

int main(){_
    int n,s;
    cin>>n>>s;
    ll arr[s];
    vector<pair<ll,ll>> vec;
    int temp[s]={0};
    for(int i=0;i<n;i++){
        ll x,y;
        cin>>x>>y;
        vec.push_back(make_pair(x,y));
    }
        
           
    sort(vec.begin(),vec.end());
    //cout<<vec[0].first<<" "<<vec[n-1].second<<endl;
           
    for(int i=0;i<s;i++){
        cin>>arr[i];
        ll t=arr[i];
        int q=i;
        binary (t,temp,vec,0,n-1,q);
    }
    for(int i=0;i<s;i++){
        cout<<temp[i]<<" ";
    }
    //binary (a,temp,vec,0,n-1,s);


}