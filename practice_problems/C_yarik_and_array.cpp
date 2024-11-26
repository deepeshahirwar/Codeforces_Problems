#include<bits/stdc++.h>
#include <cctype>
#include <iostream>
#include <cstring> 

#define ll long long
#define pb push_back
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));
using namespace std;

int main()
{
    fastread(); 
    int t; cin>>t; 
    while(t--){ 

    ll n,b,sum =0,par=0, maxi =  INT_MIN;  
    cin>>n;  
    cin>>b;  

    sum = b;  
    par = abs(b)%2; // check parity
    maxi = sum; 

    for(int i=1; i<n; i++) {
         cin>>b;
     
            if (abs(b)%2 != par){ // when parity is different
                sum += b;
            } 
            else{
                sum = b;    //when parity is not different then update the sum
            } 
            sum = max(sum, b); // when b > sum 
             par = abs(b)%2;  // update the parity
             maxi = max(maxi, sum); // for max sum
           
        }

        cout<<maxi<<endl;
  
    }
    return 0;
}
 
 
           