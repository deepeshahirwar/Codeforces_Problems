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
    int t; cin>>t; 
    while(t--){
    int n,k; cin>>n>>k; 
     
  
    for(int i=n-k; i<=n; i++){
        cout<<i<<" ";
    } 
     for(int i=n-k-1; i>=1; i--){
        cout<<i<<" ";
    }
      cout<<endl;   
  
    }
    return 0;
}
 
 
           