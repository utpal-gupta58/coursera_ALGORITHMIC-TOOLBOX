#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
#define _ ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

void multiply(ll F[2][2], ll M[2][2]) 
{ 
  ll x =  F[0][0]*M[0][0] + F[0][1]*M[1][0]; 
  ll y =  F[0][0]*M[0][1] + F[0][1]*M[1][1]; 
  ll z =  F[1][0]*M[0][0] + F[1][1]*M[1][0]; 
  ll w =  F[1][0]*M[0][1] + F[1][1]*M[1][1]; 
  
  F[0][0] = x; 
  F[0][1] = y; 
  F[1][0] = z; 
  F[1][1] = w; 
} 



void power(ll arr[2][2],ll n){
    ll M[2][2]={{1,1},{1,0}};
    if( n == 0 || n == 1) 
      return; 
    power(arr,n/2);
    multiply(arr,arr);
    if(n%2!=0){
        multiply(arr,M);
    }

}



ll fibo(ll n){
    if(n==1||n==0){return n;}
ll arr[2][2]={{1,1},{1,0}};
power(arr,n-1);
return arr[0][0];
}




int main(){_
     ll n;
     cin>>n;
     cout<<fibo(n);

}