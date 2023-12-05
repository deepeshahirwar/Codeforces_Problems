
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
int k; cin>>k;  
vector<int>arr(n); 

  for(int i=0; i<n; i++){
     cin>>arr[i];
  }  
  ll sum =0;  
   for(int i=0; i<n; i++){
     sum += arr[i];
  }  
  if(sum < n || k==0 && sum%n !=0){
    cout<<"NO"<<endl;
  } 
  else{
    cout<<"YES"<<endl;
  }    
  
} 

return 0;

}