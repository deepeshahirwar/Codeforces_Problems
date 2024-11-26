#include<iostream> 
#include<vector> 
using namespace std;  

int main(){  
    int t; 
    cin>>t; 
     
while(t--){
 int n; 
 cin>>n; 


  int a,b; 
  int currWin =0, pos=0;
  for(int i=0; i<n; i++){
     cin>>a>>b; 
     if(a <= 10){
        if( b > currWin){
            currWin = b; 
            pos = i+1;
        }
     } 
     
  }  

     cout<<pos<<endl;

  
}
 return 0;      
 }