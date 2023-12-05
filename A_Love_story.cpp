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
string s; 
cin>>s;  
int cnt =0; 
string love ="codeforces"; 

 for(int i=0; i<love.size(); i++){
    if(s[i] != love[i]){
        cnt++;
    }
 } 
  
  cout<<cnt<<endl; 
}
return 0;
} 
 