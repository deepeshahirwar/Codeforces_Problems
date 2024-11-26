#include<bits/stdc++.h> 
typedef long long int ll;
using namespace std; 
int main(){  
 ios::sync_with_stdio(false);
	cin.tie(nullptr);  
 ll i,j,k;
 ll n;  
 cin>>n;
 ll arr[n]; 
 for(i=0;i<n;i++)cin>>arr[i]; 

  int cnt =1;  
  int maxi=1;
for(int i=1;i<n;i++){
	if(arr[i] > arr[i-1]){
     cnt++;
	} else{
        if(cnt > maxi)
        maxi = cnt; 
       cnt =1;
    }
	
}
 if(cnt > maxi)
  maxi = cnt;  

cout<<maxi;
 
 return 0;
}