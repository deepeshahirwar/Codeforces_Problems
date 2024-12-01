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
      int n; 
      cin>>n; 
      int a[6]; 
      
      int total =0, m = 1;
      for(int i=1; i<6; i++){
          a[i] = n%10; 
          n /=10; 
          if(a[i] != 0)
          total++;
      } 

      cout<<total<<endl; 
      for(int i=1; i<6; i++){
         if(a[i] != 0){
            cout<<a[i]*m<<" ";
         }
          m = m*10;
      }
      cout<<endl;
    
   
 
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