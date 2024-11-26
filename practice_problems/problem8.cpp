#include<bits/stdc++.h> 
using namespace std;  

int main(){  
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 

   string str; 
   cin>>str; 
   string numbers=""; 
   
    for(int i=0; i<str.size(); i++){
        if(str[i] != '+'){
           numbers += str[i];
        } 
    } 
    sort(numbers.begin(), numbers.end()); 
     int idx =0;
     for(int i=0; i<str.size(); i++){
        if(str[i] != '+'){
            str[i] = numbers[idx++];
        } 
     } 

    cout<<str<<endl;
      
 return 0;      
 }