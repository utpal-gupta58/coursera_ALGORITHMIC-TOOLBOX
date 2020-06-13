#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
#define _ ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);


int main(){_
    int n;
    cin>>n;
    vector<pair<ll,ll>>vec;

    for(int i=0;i<n;i++){
        ll x,y;
        cin>>x>>y;
        vec.push_back(make_pair(y,x));

    }
    sort(vec.begin(),vec.end());
    set<int >point;
    point.insert(vec[0].first);  
    for(int i=1;i<n;i++){
        
        
        if(vec[i].second<=*point.rbegin()){
            continue;
        }
        else{
        point.insert(vec[i].first); 
            
        }

        
        
    }
    
    cout<<point.size()<<"\n";
    for(auto i=point.begin();i!=point.end();i++){
        cout<<*i<<" ";
    }
}