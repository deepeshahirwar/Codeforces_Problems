#include<bits/stdc++.h> 
using namespace std;  

int main(){  
    long long n; 
    cin>>n;  
     
  int lucky=0;  
   
    while(n != 0){
        if( n%10 == 4 || n%10 == 7){
           lucky++; 
        } 
         n /= 10;
    }

    if( lucky ==  7 || lucky == 4){
       cout<<"YES"<<endl; 
    }
    else{
    cout<<"NO"<<endl; 
    }
      
 return 0;      
 }