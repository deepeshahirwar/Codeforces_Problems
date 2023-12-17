#include<bits/stdc++.h>
#include <cctype>
#include <iostream>
#include <cstring> 

#define ll long long
#define pb push_back
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));
using namespace std;
// square sum 
int main()
{
    fastread(); 
    int n; cin>>n; 
    int  ans =0; 
    for(int i=1; i<=n; i++){
        ans += i*i;
    } 
    cout<<ans<<endl;
    
    return 0;
}
 
 
           