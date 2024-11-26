
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
    int n; cin>>n;
    string s; 
    cin>>s; 
   int plus =0, minus = 0;
    for(int i=0; i<n; i++){
         if(s[i] == '+')plus++;
    } 
    minus = n - plus; 

    cout<<abs(plus - minus)<<endl;
    
  }

  return 0;
}
