
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
        int n;
        cin >> n;

        vector<int> arr(n);
        for (int i = 0; i < n; i++){
            cin >> arr[i]; 
        }

        ll sum = 0;
        ll even = 0;
        ll odd = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] % 2 != 0 || arr[i] == 1)
            {
                odd++;
            }
            else
            {
                even++;
            }
            sum += arr[i];
        } 

        if (sum % 2 != 0 || sum == 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            if (odd != 0 && even != 0)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}