 #include<bits/stdc++.h>
#define ll              long long
#define pb              push_back
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;  
 
 string decode(string s) {
   int n = s.size(); 
   reverse(s.begin(), s.end()); 
    int temp =0; 
    string ans =""; 
    int i=0;
    while(i!=s.size()){
        if((temp) < 65){
            temp = 10*temp+(s[i]-'0');
        }  
       
         if((temp) >=65 && (temp) <= 122){
          ans += char((temp));
          temp=0;
        }  
        if(temp == 32){
            ans+=" ";
            temp=0;
        }
     
        i++;
    }
    
    return ans;
} 

int main()
{  
fastread(); 
string s; 
cin>>s;  

 cout<<"ans -> "<<decode(s)<<endl; 

} 
 