#include<iostream> 
#include<vector> 
using namespace std;  

int main(){  
    int t; 
    cin>>t; 
     
while(t--){
 int n; 
 cin>>n;  
 
   string s; cin>>s; 
   bool flag = false;
  for(int i=0; i<n; i++){
      for(int j=i+1; j<n; j++){
       if(s[i] == s[j] && (j-i+1)%2 ==0){
        flag = true; 
        break;
       }
  }  
  }  

  if(flag){
    cout<<"no"<<endl;
  }  
  else{
     cout<<"yes"<<endl;
  }
  
}
 return 0;      
 }