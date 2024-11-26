
#include <iostream>
#include <vector>
#define ll long long
#define pb push_back
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));
using namespace std;

// B.Good kid
/*logic - 1. find min_element and  min_element += 1   
        2. take all element of product and return the product*/
int main()
{
    fastread();

    ll t;
    cin >> t;
    while (t--)
    {
        
       int n; cin>>n;  
      vector<int>arr(n); 
//step 1
       int maxi= 10; 
        int mx_idx =0;
       for(int i=0; i<n; i++){
        cin>>arr[i]; 

          if(arr[i] < maxi){
            maxi = arr[i]; 
            mx_idx =i;
          } 
       }  
       arr[mx_idx] += 1; 

    //step 2  
       int product = 1;     
         for(int i=0; i<n; i++){
         product *= arr[i];
         }  

         cout<<product<<endl;
       
    } 
     return 0;
}
