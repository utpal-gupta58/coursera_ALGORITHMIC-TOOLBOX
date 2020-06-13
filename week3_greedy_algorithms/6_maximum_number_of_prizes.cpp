#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    ll n;
    cin>>n;
    if(n==1||n==2){
        cout<<1<<"\n"<<n;
        return 0;
    }
    int sum=0;
    vector<int >vec;
    for(int i=1;i<=(n/2)+1;i++){
        sum+=i;
        if(sum<=n){
            vec.push_back(i);
            if(sum<n)continue;
            else if(sum==n){break;}
        }
        else if(sum>n){
            //cout<<"A";
            *vec.rbegin()+=(n-(sum-i));
            break;
        }

    }
    cout<<vec.size()<<"\n";
    for(auto i=vec.begin();i!=vec.end();i++){
        cout<<*i<<" ";
    }

}