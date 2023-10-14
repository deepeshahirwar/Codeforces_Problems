#include<bits/stdc++.h> 
using namespace std;  

int main(){  
    int t; 
    cin>>t; 
     
while(t--){
 int n,k; 
 cin>>n>>k; 


   vector<int>arr(n); 
  for(int i=0; i<n; i++){
     cin>>arr[i];
  }  

   int ans =1; 
   int local =1; 
    for(int i=1; i<n; i++){
    if(abs(arr[i]-arr[i-1]) <= k){
     local++;
    } 
    else{
        ans = max(ans, local); 
        local =1;
    }
   }  

   sort(arr.begin(), arr.end());  
   local =1; 

   for(int i=1; i<n; i++){
    if((arr[i]-arr[i-1]) <= k){
     local++;
    } 
    else{
        ans = max(ans, local); 
        local =1;
    }
   } 

    ans = max(ans, local); 
   cout<<n-ans<<endl;
}
 return 0;      
 }