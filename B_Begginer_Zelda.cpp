
#include<bits/stdc++.h>
#define ll              long long
#define pb              push_back
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;  
 
int main()
{  
fastread();  
int t; cin>>t;  
while(t--){
int n; cin>>n; 

  vector<int> adj[n+1]; 
   
 
 for(int i=1; i<n; i++){ 
   int u,v;
   cin>>u>>v; 
  adj[u].push_back(v); 
  adj[v].push_back(u);
 }
 
 int leaves =0; 
 for(int i=1; i<=n; i++){
  if(adj[i].size() == 1)leaves++;
 } 
 int ans = ceil(double(leaves)/double(2)); 
  
  cout<< ans <<"\n";
 
} 

return 0;

}