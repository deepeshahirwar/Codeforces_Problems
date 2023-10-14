
#include <bits/stdc++.h> 
using namespace std; 
int main()
{ 
ios_base::sync_with_stdio(false);
cin.tie(NULL);  
 
 int n; cin>>n;  
 string s; cin>>s;
  
  int j=2; 
  for(int i=0; i<n;){
    cout<<s[i]; 
    i = i+j; 
    j++;
  }
  cout<< endl;  
    
  return 0;
}