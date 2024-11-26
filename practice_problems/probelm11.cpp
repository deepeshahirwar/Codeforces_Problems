 
 #include<bits/stdc++.h> 
using namespace std;  
 
 bool isVovel(char ch ){
    if(ch =='a' || ch =='e'|| ch =='o' ||
      ch =='u'  || ch =='i'|| ch =='y') 
    {
        return true;
    } 
    else{
        return false;
    }
 }
int main(){  
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 
 
  string s; 
  cin>>s;
   int n = s.size(); 
    string temp ="";  
     // step 1
     transform(s.begin(),s.end(),s.begin(), ::tolower);
    // step2
    for(int i=0; i<n; i++){ 
        if(isVovel(s[i])){
            continue;
        } 
        else{
            temp +='.'; 
            temp += s[i];
        }
    }
    
    cout<<temp<<endl; 
 
 return 0;      
 }