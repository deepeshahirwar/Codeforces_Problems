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
      int n,x; 
      cin>>n; 
      vector<int>a(1001, -1); 
      for(int i=1; i<=n; i++){
        cin>>x; 
        a[x]=i;// stroing latest occurance of number
      } 
// then find answer brute forcelly
      int mx = -1; 
      for(int i=1;i<1001; i++){
        if(a[i] != -1){
        for(int j=1; j<1001; j++){  

            if(a[j] != -1 && __gcd(i,j) == 1)
                mx = max(mx, a[i]+a[j]);
         }
        }
      } 
       
        cout<<mx<<endl;

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