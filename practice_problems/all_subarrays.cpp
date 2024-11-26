#include<bits/stdc++.h>
using namespace std; 

int disNumSqr(vector<int>ds){
    set<int>st; 
    for(auto it : ds)st.insert(it);  

     return st.size()*st.size();
}
    int sumCounts(vector<int>& nums) {
         int sum=0;
        int n=nums.size(); 

        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){ 
                vector<int>ds; 
            for(int k =i; k<=j; k++){
              ds.push_back(nums[k]); 
            } 
            sum += disNumSqr(ds);
            }
        }
        return sum;
    }

int main () {
    
        vector<int> nums = {1,2,1};
       
        cout <<sumCounts(nums) << endl;
  
    return 0;
}