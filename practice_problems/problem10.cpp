#include<bits/stdc++.h> 
using namespace std;  

int main(){  
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 
 
 int t; cin>>t; 
 while(t--){
   int n,m; 
   cin>>n>>m; 
  char arr[n+1][m+1]; 
   
   int x=0, y=0; 
   for(int i=1; i<=n; i++){
    for(int j=1; j<=m; j++){
        cin>>arr[i][j];
    }
   } 
    //count D in the last row 
    for(int i=1; i<=n-1; i++){
        if(arr[i][m] != 'D')
        x++;
    }

    //count R in the last column 
    for(int j=1; j<=m-1; j++){
        if(arr[n][j] != 'R')
        y++;
    }

    cout<<x+y<<endl; 
 }
 return 0;      
 }