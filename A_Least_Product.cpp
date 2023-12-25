
#include <iostream>
#include <vector>
#define ll long long
#define pb push_back
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));
using namespace std;


int main()
{
    fastread();

    ll t;
    cin >> t;
    while (t--){
   
        
       int n; cin>>n;  
      vector<int>arr(n); 

       
       for(int i=0; i<n; i++)
        cin>>arr[i]; 

           
          int neg =0, zero=0;     
         for(auto it : arr){
            neg += (it < 0); 
            zero +=(it == 0);
         }  

        if(zero || neg%2){
            cout<<0<<endl;
        }else{
            cout<<1<<endl;  
            int idx =0; 
            for(int i=0; i<n; i++){
               if(arr[i] < 0) idx =i;
            }
            cout<<idx+1<<" "<<0<<endl;
        }
       
    } 
     return 0;
}
