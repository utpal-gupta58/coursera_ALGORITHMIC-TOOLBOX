#include<bits/stdc++.h>
using namespace std;
#define _ ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int 


int main(){
    int d;cin>>d;
    int m,n;cin>>m>>n;
    int arr[n+2];
    arr[0]=0;arr[n+1]=d;
    for(int i=1;i<=n;i++){
        cin>>arr[i];
        //a[i+1]=arr[i]-a[i-1];
    }
    int curr=0,min=0,pos=0;int last;
    for(int i=1;i<=n+1;i++){
        //cout<<"curr="<<curr<<" "<<"pos="<<pos<<" "<<"min="<<min<<" \n"; 
        
        if(arr[i]<arr[curr]+m){
            //pos=i;
           // cout<<"continued\n";
            continue;
            
        }
        else if(arr[i]==arr[curr]+m){
            if(arr[i]==d){ break;}
            //pos =i;
            curr=i;
            min++;
             //cout<<"just equal\n";
        }
        if(arr[i]>arr[curr]+m){
            
            // cout<<"find fuel\n";
            curr=i-1;
            //pos++;
            min++;            
        }
        if(arr[i]-arr[i-1]>m){cout<<-1;return 0;}
        //cout<<"currafter="<<curr<<" "<<"posafter="<<pos<<" "<<"minafter="<<min<<" \n";
    }
    cout<<min;
}
