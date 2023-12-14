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
    int n; cin>>n; 
    vector<int>a(n); 
    for(int i=0; i<n; i++)
        cin>>a[i];
     
    int cnt =1; 
    int maxi =1; 
    for(int i=0; i<n-1; i++){ 

        if(a[i] == 0 && a[i] == a[i+1]){
            cnt++; 
            maxi = max(maxi , cnt);
        } 
        else if(a[i] != 0 )
            continue;
        else
            cnt = 1;
       
    }   

    int one =0;  
    for(int i=0; i<n;i++){
        if(a[i] ==1)one++;
    } 

    if(one == n){
        cout<<0<<endl;
    }else{
       cout<<maxi<<endl;
    }

    }
    return 0;
}
 
 
           