#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
#define _ ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int  main(){_
     int n;
     cin>>n;
     int min=0;
     min+=n/10;
     n=n%10;
     min+=n/5;
     n=n%5;
     min+=n/1;
     cout<<min;     

}
