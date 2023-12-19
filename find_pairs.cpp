
 #include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));
using namespace std;

// Find pairs
int main() {
  fastread();

  ll n;
  cin >> n;

  vector<ll> a(n), ans(n+1);
  for (ll i = 0; i < n; i++) {
    cin >> a[i];
  }

  ll count = 0;
  
  sort(a.begin(), a.end()); 

  for(ll i=0; i<n; i++){
    ans[i+1] = a[i];
  }
    
   for(ll  i=1; i<n+1; i++){
    if(i == ans[i]){
      count++; 
    
   }  
   } 
    
    cout<< (count*(count+1))/2;

  return 0;
}
