#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
#define _ ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);


int main(){_
    int n;
    cin>>n;
    if(n==1){cout<<0<<"\n1";return 0;}
    int arr[n+1];
    for(int i=0;i<=n;i++){
        arr[i]=INT_MAX;
    }
    arr[1]=0;
    vector<int>vec;
    //vec.push_back(1);
    int t=1;
    for(int i=1;i<=n;i++){
        //int count=0;
        if(i==1){continue;}
        if(i%2==0){
            arr[i]=min(arr[i],(arr[i/2]+1));
            
        }
        if(i%3==0){
            arr[i]=min(arr[i],(arr[i/3]+1));
        }
        if(i>1){
            arr[i]=min(arr[i],(arr[i-1]+1));
        }
        
    }
    for(int i=n;i>=1;i--){
        vec.push_back(i);
        if(i%2==0){
            if(arr[i]-arr[i/2]==1){
                i=(i/2)+1;
                continue;
            }

        }
        if(i%3==0){
            if(arr[i]-arr[i/3]==1){
                i=(i/3)+1;
                continue;
            }
        }
        
        
    }
    cout<<arr[n]<<"\n";
    for(auto i=vec.rbegin();i!=vec.rend();i++){
        cout<<*i<<" ";
    }
    // for(const auto &i:vec)
    // cout<<i<<" ";
}