#include<string>
#include<iostream> 
#include<vector> 
#include<map>
using namespace std;  

int main(){  
    int t; 
    cin>>t; 
     
while(t--){
 
  string s;  
   
  map<char, int>mp; 

  for(int i=0; i<3; i++){
     cin>>s;  
     for(int j=0; j<3; j++){
        mp[s[j]]++;
        } 

     }
      char ans;
      for(auto it : mp){
        if(it.second == 2){
            ans = char(it.first);
            break;
        }
      } 

 
 cout<<char(ans)<<endl;
  
}
 return 0;      
 }