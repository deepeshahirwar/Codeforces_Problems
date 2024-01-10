
#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));
using namespace std;
int main()
{
    fastread();

    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> a(n);
        ll sl = INT_MAX;
        ll tl = INT_MAX;
        ll value;
        ll penalty = 0;
        for (ll i = 0; i < n; i++)
        {
            cin >> value;

            if (sl > tl)
                swap(sl, tl);
            if (value <= sl)
                sl = value;
            else if (value <= tl)
                tl = value;
            else
            {
                sl = value;
                penalty++;
            }
        }

        cout << penalty << endl;
    }

    return 0;
}
