
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
        
        string s;
        cin >> s;

        if(s[0] == 'c' && s[2] == 'b' || s[0] == 'b' && s[2] == 'a'){
            cout<<"NO"<<endl;
        }  
        else{
             cout<<"YES"<<endl;
        }
     
       
       
    } 
     return 0;
}
