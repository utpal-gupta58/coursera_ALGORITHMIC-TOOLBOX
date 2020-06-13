#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
#define _ ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int main(){_
    int n,m;
    cin>>n>>m;
    vector<pair<double ,int > > vec;
    while(n--){
        double v,w;
        cin>>v>>w;
        vec.push_back(make_pair(v/w,w));

    }
    double loot=0;
    sort(vec.begin(),vec.end(),greater<>());
          // cout<<vec[0].first<<" "<<vec[0].second<<endl;
    for(const auto &i:vec){
        if(i.second==m){
            loot+=i.first*i.second;
            m=0;
            break;
        }
        else if(i.second>m){
            loot+=m*i.first;
            break;
        }
        if(i.second<m){
            loot+=i.first*i.second;
            m-=i.second;
        }
       
    }
    std::cout << std::fixed;
    std::cout << std::setprecision(4);
    cout<<double(loot);

}