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
    vector<int>a(n); 
    for(int i=0; i<n; i++)
        cin>>a[i];
     
   bool found = false;
    for(int i=0; i<n; i++){ 
       if(a[i] == k){
        found = true; 
        break;
       }
    }  
    if(found)
    cout<<"YES"<<endl; 
    else 
    cout<<"NO"<<endl;  

    }
    return 0;
}
 
 
           