
#include <bits/stdc++.h> 
using namespace std; 

int main()
{ 
ios_base::sync_with_stdio(false);
cin.tie(NULL);  
 
 int t; cin>>t; 
 while(t--){ 
    vector<int>arr(3); 
    for(int i=0; i<3; i++){
        cin>>arr[i];
    } 
    sort(arr.begin(), arr.end()); 
    
  int sum =arr[1]+arr[2];
  
    if(sum >= 10){
      cout<<"YES"<<endl;
    }
     else{
     cout <<"NO"<<endl;
     }
 }
  return 0;
}