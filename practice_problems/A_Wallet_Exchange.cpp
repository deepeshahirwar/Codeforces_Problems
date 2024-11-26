
#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));
using namespace std;

// Find pairs
int main() {
  fastread();

  ll t;
  cin >> t; 
  while(t--){
    ll a, b; 
    cin>>a>>b; 

    if((a+b)%2 == 0){
        cout<<"Bob"<<endl;
    } 
    else{
        cout<<"Alice"<<endl;
    }
  }

  return 0;
}
