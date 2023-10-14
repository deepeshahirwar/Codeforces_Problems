
#include <bits/stdc++.h> 
using namespace std; 
int main()
{ 
ios_base::sync_with_stdio(false);
cin.tie(NULL);  
 
 int t; cin>>t; 
while(t--){
 int n,m; cin>>n>>m;  
 string s1,s2; cin>>s1>>s2;
 
 bool S2_found = false;
 for(int i=0; i<=6; i++){ 
  if (s1.find(s2) != -1) {
     S2_found = true;  
     cout<<i<<"\n";
    break;
   }  
   s1 += s1;
 } 
if(!S2_found)
cout<<-1<<endl;

} 
  return 0;
}