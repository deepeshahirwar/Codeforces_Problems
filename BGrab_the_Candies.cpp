#include<iostream> 
#include<vector> 
using namespace std;  

int main(){  
    int t; 
    cin>>t; 
     
while(t--){
 int n; 
 cin>>n; 


   vector<int>arr(n);  
   int evensum =0;
    int oddsum =0;
  for(int i=0; i<n; i++){
     cin>>arr[i]; 
     if(arr[i]%2 ==0)evensum += arr[i];
     else oddsum += arr[i];
  }  

  if(evensum > oddsum ){
    cout<<"YES"<<endl;
  }  
  else{
     cout<<"NO"<<endl;
  }
  
}
 return 0;      
 }