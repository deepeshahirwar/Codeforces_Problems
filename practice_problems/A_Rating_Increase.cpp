
#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));
using namespace std;

int main()
{
    fastread();
    int t;
    cin >> t; 
    while(t--){
       string s; 
       cin>>s;  
       int n = s.size(); 

     
    string s1 =""; 
    string s2 =""; 
        s1 += s[0];  
        int idx =0;
        for(int i=1; i<n; i++){
            if(s[i]-'0' != 0){
                idx =i;  
                 break; 
            }
            else 
            s1 += s[i];
        } 
    
       s2 = s.substr(idx , n-1);
         
         int a = stoi(s1); 
         int b = stoi(s2); 
         if(a >= b){
            cout<<-1<<endl;
         }  
         else{
            cout<<a<<" "<<b<<endl;
         }

    }
    return 0;   
}