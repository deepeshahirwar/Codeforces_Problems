#include<bits/stdc++.h> 
using namespace std;  

int main(){  
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 
 
 int t; cin>>t; 
 while(t--){
   int a,b,n; 
   cin>>a>>b>>n; 
   int sum =0; 
    int cnt =0;
    while(sum <= n){ 
        if(a>b){ 
         b += a;  
         sum =b;
        cnt++;
        } 
        else{
         a += b;  
         sum =a;
        cnt++;
        } 
        if(sum > n){
            break;
        }
       
    } 
    cout<<cnt<<endl; 
 }
 return 0;      
 }