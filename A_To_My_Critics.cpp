
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
    int t; cin>>t; 
    while(t--){
      int a,b,c; 
      cin>>a>>b>>c; 
      
        if(a+b >= 10 || b+c  >= 10 || a+c >=10)
        cout<<"yes"<<endl;
        else 
         cout<<"no"<<endl;
       
    }   

    
    return 0;
}
 
 
           