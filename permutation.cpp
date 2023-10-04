#include<bits/stdc++.h>
using namespace std;



vector<vector<int>>ans;
unordered_set<int>s;
void formsub(vector<int>arr,vector<int>v){


    if(v.size()==arr.size()){
        ans.push_back(v);
        return;
    }
          for(int i=0;i<arr.size();i++){
            if(s.find(arr[i])==s.end()){
                v.push_back(arr[i]);
                s.insert(arr[i]);
                formsub(arr,v);
                v.pop_back();
                s.erase(arr[i]);
            }
          }
}

int main(){
    vector<int>arr={1,2,3};
    vector<int>v;

    formsub(arr,v);

    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}




