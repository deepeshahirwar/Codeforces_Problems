
#include<iostream> 
#include<vector>
#include<set>
#include<algorithm>
#define ll long long
#define pb push_back
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));
using namespace std;

//A. Distinct Buttons
int main()
{
    fastread();

    ll t;
    cin >> t;
    while (t--)
    {
        
      ll n; cin>>n; 
     vector<ll>a(n); 
    
     for(int i=0; i<n; i++)cin>>a[i];  
      
    ll k = 2;
    while (k < 1e18) {
      set<ll> s;
        for (int j=0; j<n; j++) 
           s.insert (a[j] % k);

        if (s.size() == 2)
          break;

        k*=2;
    }
       cout<<k <<endl;

    
    } 
     return 0;
}
