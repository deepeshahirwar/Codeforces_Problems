
#include<bits/stdc++.h>
#define ll              long long
#define pb              push_back
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;  
 
int main()
{  
fastread(); 
int k; cin>>k; 
string s; 
cin>>s;  
 
 int cnt =0; 
 int n= s.size(); 
 char ch; 
  
  sort(s.begin(), s.end()); 
  for(int i=0; i<n; i++){
    if(i%k == 0){
        ch = s[i];
    } 
    if(s[i] == ch){
        cnt++;
    }
  } 
   
   if(n == cnt && cnt%k ==0){
    for(int i=0; i<k; i++){
        for(int l=0; l<n; l+=k){
            cout<<s[l];
        }
    }
   } 
   else{
    cout<<"-1";
   }

return 0;

}