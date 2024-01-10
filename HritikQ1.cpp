
#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));
using namespace std;
// sort num arr in descending order
void sorting(vector<int>&num, vector<char>&ch){ 
    for(int  i=0; i< num.size()-1 ; i++){
        for(int j=i+1; j<num.size(); j++){
            if(num[i] < num[j]){
            swap(num[i], num[j]); 
            swap(ch[i], ch[j]);  
            }
        }
    }

} 
//adddbb -> dddbba
//cdaacc -> cccaad
int main() {
  fastread();

  ll n;
  cin >> n;
  string s;  cin>>s; 
   
   map<char , int>mp; 
   for(auto it : s) mp[it]++; 
    
    vector<char>ch; 
    vector<int>num; 
     
     for(auto it : mp){
        ch.push_back(it.first);
        num.push_back(it.second);
     } 

     sorting(num , ch); 

    //  for(auto it : ch)cout<<it<<" ";
    //  cout<<endl;
    //   for(auto it : num)cout<<it<<" ";  

    for(int i=0; i<num.size(); i++){
        while(num[i]--){
            cout<<ch[i];
        }
    }

  return 0;
}
