#include<bits/stdc++.h>
#include <cctype>
#include <iostream>
#include <cstring> 

#define ll long long
#define pb push_back
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));
using namespace std;

int main()
{
    fastread(); 
    ll t; cin>>t; 
    while(t--){
    ll n,k,x; cin>>n>>k>>x; 
    ll min_sum = (k*(k+1))/2; 
    ll total_sum = (n*(n+1))/2; 
    ll max_sum = total_sum  - ((n-k)*(n-k+1))/2; 
     
     if( x <= max_sum && x >= min_sum)
     cout<<"YES"; 
     else 
     cout<<"NO"; 

     cout<<endl;
    }
    return 0;
}
 
 
           