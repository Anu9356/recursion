#include<bits/stdc++.h>
using namespace std;


void countstring(int i,vector<int>&v,vector<int >&arr,int target,vector<vector<int>>&ans){
    if(i==arr.size()){
      if(target==0){
       ans.push_back(v);
    }
     return ; 
    }
    if(arr[i]<=target){
    v.push_back(arr[i]);
     countstring(i,v,arr,target-arr[i],ans);
     v.pop_back();
    }
     countstring(i+1,v,arr,target,ans);

}
int main(){
   
     vector<int>arr={2,3,6,7};int target=7;
     vector<int>v;
     vector<vector<int>>ans;
     countstring(0,v,arr,target,ans);

     for(int i=0;i<ans.size();i++){
      for(int j=0;j<ans[i].size();j++){
         cout<<ans[i][j]<<" ";
      }
      cout<<endl;
     }

    
    return 0;

}