
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
//for max sum  
ll max_sum = 0; 
for(int i=0; i<n; i++){
    max_sum += abs(arr[i]);
}
//   for minimum ops
 int neg_cnt =0;  
 int ans =0;
 for(auto x :arr){
    if(x==0 && neg_cnt==0){
        continue;
    } 
    if(x <= 0){
        neg_cnt++;
    } 
    else{ 
        if(neg_cnt > 0){
            ans++;
        }
       neg_cnt =0; 
    }
 }  
 if(neg_cnt){
    ans++;
 }
 
cout<<max_sum<<" "<<ans<<endl;
 
} 

return 0;

}