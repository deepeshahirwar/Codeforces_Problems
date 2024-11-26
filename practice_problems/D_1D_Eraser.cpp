
#include <iostream>
#define ll long long
#define pb push_back
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));
using namespace std;

// Find pairs
int main()
{
    fastread();

    ll t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        string s;
        cin >> s;

        ll ans = 0;
        ll i=0; 
        while(i < n){
            if(s[i] == 'B' )
            {
                i = i + k;
                ans++;
            }else{
                i++;
            }
          }
     
          cout << ans << endl;
       
    } 
     return 0;
}
