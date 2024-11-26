
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
 
vector<int>arr(n); 
for(int i=0; i<n; i++)cin>>arr[i];
  sort(arr.begin(), arr.end());   
int left =0; 
int right =n-1;  
 ll ans =0;
 while(left <= right){
  ans += arr[right]-arr[left]; 
  left++; 
  right--;
 }
cout<<ans<<endl;
 
} 

return 0;

}