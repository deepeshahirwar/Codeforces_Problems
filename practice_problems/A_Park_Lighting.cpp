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

    int n,m; 
    cin>>n>>m;
  
   ll ans = n*m; 
   if(ans%2 == 0){
    cout<<ans/2<<endl;
   } 
   else{
    cout<<(ans+1)/2<<endl;
   }

}
return 0;
} 
 