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
    vector<int>a(n),b(n); 

    for(int i=0; i<n; i++)cin>>a[i];
    for(int i=0; i<n; i++)cin>>b[i];  
     
     int sum=0, maxi= INT_MIN, ans=0; 

        for (int i=0; i<n; i++) {
        
            if (i == k)
              break;
            else {
                sum += a[i];
                maxi= max(maxi, b[i]);
            }

            ans = max((sum+(k-i-1)*maxi), ans);
        }

        cout<<ans<<endl;
  
    }
    return 0;
}
 
 
           