
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
vector<int>arr(2*n);  
for(int i=0; i<2*n; i++)cin>>arr[i]; 
sort(arr.begin(), arr.end()); 

int min_diff = 0;  
 int i=0; 
 int j = 2*n-1; 
 int mid = (i+j)/2; 

 min_diff = arr[mid+1]-arr[mid];
cout<<min_diff<<endl;
  }
  return 0;
}