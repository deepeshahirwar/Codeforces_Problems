 #include<bits/stdc++.h>
#define ll              long long
#define pb              push_back
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;  
 
bool isPalindrome(string s) { 
    int n = s.size();
   int left =0; 
   int right = n-1;  
   while(left <= right){
    if(s[left++] != s[right--]){
        return false;
    }
   }
 return true;   
} 

int main()
{  
fastread(); 
string s; 
cin>>s;  
int n= s.size(); 
int cnt =0;
 for(int i=0; i<n-1; i++){
    for(int j=i+1; j<n; j++){
    if(isPalindrome(s.substr(i, j))){
        cnt++;
    }
 }
 } 
  
  cout<<cnt+n<<endl;

} 
 