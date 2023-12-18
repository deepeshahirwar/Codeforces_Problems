
#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));
using namespace std;

int main()
{
  fastread();
  int t;
  cin >> t;
  while (t--)
  {
    string s;
    cin >> s;
    ll n = s.size();
     ll a[2] = {0,0}; 
 
    for(ll i = 0; i < n; i++)
    {
        a[s[i]-'0']++;
    }  

   ll ans =0;
  for(ll i=0; i<n; i++){
      if(a[!(s[i]-'0')] > 0){
        a[!(s[i]-'0')]--;
      } 
      else{
        ans = n - i; 
        break;
      }
  }
   
      cout << ans << endl;
    

  }
  return 0;
}