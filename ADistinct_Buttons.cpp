
#include<iostream> 
#include<vector>
#include<algorithm>
#define ll long long
#define pb push_back
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));
using namespace std;

//A. Distinct Buttons
int main()
{
    fastread();

    ll t;
    cin >> t;
    while (t--)
    {
        
      int n; cin>>n; 
      vector<vector<int>>mat(n, vector<int>(2)); 
    
     for(int i=0; i<n; i++){
        for(int j=0; j<2; j++){
            cin>>mat[i][j];
        }
     } 
      sort(mat.begin(), mat.end());
    //   main logic is here 
    bool first=false, second =false, third  = false,  fourth=false; 
    int x =0, y=0;
      for(int k=0; k<n; k++){
         int i = mat[k][0]; 
         int j= mat[k][1];  
        if(i-x>0)first = true;;
        if(j-y>0)second = true;
        if(i-x<0)third = true;
        if(j-y<0)fourth = true;

    
     }   

     if(first && second && third && fourth){
        cout<<"NO"<<endl;
     } 
     else{
        cout<<"YES"<<endl;
     }
       
    } 
     return 0;
}
