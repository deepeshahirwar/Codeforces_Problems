/******************** DEEPESH AHIRWAR ***********************/
#include<bits/stdc++.h> 
 #include <fstream> 
 using namespace std; 

 #define fastio() ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)
 #define MOD 1000000007

 
 #define endl "\n"
 #define pb push_back
 #define ppb pop_back
 #define mp make_pair
 #define ff first
 #define ss second
 #define set_bits __builtin_popcountll
 #define sz(x) ((int)(x).size())
 #define all(x) (x).begin(), (x).end()  
 #define sort_all(x) sort(x.begin(),x.end())
 #define reverse_all(x) reverse(x.begin(),x.end())
 #define py cout<<"YES"<<"\n" 
 #define pn cout<<"NO"<<"\n" 
 
 typedef long long ll;
 typedef unsigned long long ull;
 typedef long double lld; 

/*************** WELCOME *******************/
  void solution(){
    int R=0,B=0; 
    vector<string>v;
      for(int i=0; i<8; i++){
        string s; 
        cin>>s;  
        v.push_back(s);
      }  

      // traverse horizontilly  
      
      for(int i=0; i<8; i++){
          string t = v[i]; 
          int cntr =0;
          for(int i=0; i<8; i++){
             if(t[i] == 'R')cntr++; 
             if(cntr == 8){
                cout<<"R"<<endl;
                return;
             }
          }
      } 

        cout<<'B'<<endl;
    

  } 

 int main() {
 #ifndef ONLINE_JUDGE 
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
 #endif  
fastio();    

   ll t; 
    cin>>t;  
   for(int i=0;i<t;i++){ 
    solution(); 
   } 

   return 0;
 }