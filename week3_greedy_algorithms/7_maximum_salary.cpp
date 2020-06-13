#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
#define _ ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int compare(string x,string y){
    string xy=x+y;
    string yx=y+x;
    return xy>yx?1:0;
}


int main(){_
    int n;
    cin>>n;
    vector<string>vec;
    for(int i=0;i<n;i++)
    {
        string s;
        cin>>s;
        vec.push_back(s);
    }
    sort(vec.begin(),vec.end(),compare);
    for(auto i=vec.begin();i!=vec.end();i++){
        cout<<*i;
    }
}