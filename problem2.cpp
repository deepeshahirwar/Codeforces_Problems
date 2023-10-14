#include<bits/stdc++.h> 
using namespace std;  

int main(){  
    int n; 
    cin>>n; 
   int cnt=0; 

    for(int i=1; i<=n; i++){
        int x; 
        cin>>x;  

         if(x==1){
            cnt++;
         }
    } 
    if(cnt >0){
       cout<<"HARD"<<endl;
    } 
    else{
        cout<<"EASY"<<endl;
    }
   
 return 0;      
 }