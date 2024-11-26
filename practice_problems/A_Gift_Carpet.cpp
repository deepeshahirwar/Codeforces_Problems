
#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));
using namespace std;

int main()
{
    fastread(); 
    int t; cin>>t; 
    while(t--){
    int n, m;
    cin >> n >> m;
    vector<string> vec(n);
    for (int i = 1; i <= n; i++)
    {
        string temp;
        cin >> temp;
        vec.push_back(temp);
    }

    int cnt = 0;
    string target = "vika";
    for (int i = 0; i < m; i++)
    {
        for (auto str : vec)
        {
            if (str[i] == target[cnt])
            {
                cnt++;
                break;
            }
        }
        if (cnt == 4)
            break;
    }

    if (cnt == 4) cout << "YES" << endl;
    else cout << "NO" << endl;    

    }
    return 0; 

}