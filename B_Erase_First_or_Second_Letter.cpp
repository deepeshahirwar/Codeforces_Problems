
#include <iostream>
#include <vector>
#define ll long long
#define pb push_back
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));
using namespace std;


int main()
{
    fastread();

    ll t;
    cin >> t;
    while (t--){
   
        
       int n; cin>>n; 
       string s; 
       cin>>s;  
      vector<int>f(26); 

       ll ans = 0;
       for(int i=0; i<n; i++){
        if(!f[s[i] -'a']){
            f[s[i] -'a'] = 1; 
             
             ans += (n -i);
        }
       } 
       cout<<ans<<endl;
       
    } 
     return 0;
}
