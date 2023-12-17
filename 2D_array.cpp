#include<iostream> 
using namespace std; 
int main(){ 
    int arr1[2][2];//dicleration 2 D 
     int arr2[2][2];
     //for input arr1 
     cout<<" enter arr1 element :"<<endl;
     for(int row=0; row<2; row++){ 
        for(int col=0; col<2; col++){ 
        cin>>arr1[row][col];
     }
     } 
     //for input arr2  
     cout<<" enter arr2 element :"<<endl;
      for(int row=0; row<2; row++){ 
        for(int col=0; col<2; col++){ 
        cin>>arr2[row][col];
     }
     }  
      
     /* for(int col=0; col<2; col++){ 
        for(int row=0; row<2; row++){//multiplication 2-D array 
        cout<<arr1[row][col] * arr2[row][col]<<" ";
     }cout<<endl;
     } */ 
      
      /* for(int col=0; col<2; col++){ 
        for(int row=0; row<2; row++){//addition 2-D array 
        cout<<arr1[row][col] + arr2[row][col]<<" ";
     }cout<<endl;
     } */ 
      /*for(int col=0; col<2; col++){ 
        for(int row=0; row<2; row++){//substitution 2-D array 
        cout<<arr1[row][col] - arr2[row][col]<<" ";
     }cout<<endl;
     }*/  
      for(int col=0; col<2; col++){ 
        for(int row=0; row<2; row++){//division 2-D array 
        cout<<arr1[row][col] / arr2[row][col]<<" ";
     }cout<<endl;
     } 
}