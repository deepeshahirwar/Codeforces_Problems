
#include <cctype>
#include <iostream>
#include <cstring> 
#include <vector> 

#define ll long long
#define pb push_back
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));
using namespace std;

int main()
{
    fastread(); 
    int tc; cin>>tc; 
    while(tc--){
      int a,b,c; 
      cin>>a>>b>>c; 
      
        if(a == b){
         cout<<c<<endl;
        }
       else if(b == c){
            cout<<a<<endl;
        }
        else{
            cout<<b<<endl;
        }
       
       
    }   

    
    return 0;
}
 
 
           