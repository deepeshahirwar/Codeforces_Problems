
#include<bits/stdc++.h>
#define ll              long long
#define pb              push_back
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;  
 // find pairs
int main()
{  
fastread();  

int n; cin>>n; 

  vector<int> a(n); 
  for(int i=0; i<n; i++)cin>>a[i]; 
   
   sort(a.begin(), a.end()); 
    
    int i=0; 
    int j = n-1;  
    int ans =0;
    while(i<j){ 
        int x = a[i]-a[j]; 
        int y = i - j;
        if(x < y)j--; 
        else if( x > y)i++;
        else{
            ans++; 
            i++; 
            j--;
        }
    }
   
   cout<<ans<<endl;
 

 return 0;

}