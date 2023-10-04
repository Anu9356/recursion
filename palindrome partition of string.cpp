#include<bits/stdc++.h>

using namespace std;

bool ispalindrome(string s,int i,int j){
   while(i<=j){
     if(s[i++]!=s[j--])return 0;
     
   }
   return 1;
   
}

void partition(int i,vector<vector<string>>ans,vector<string>v,string s){

    if(i==s.size()){
        ans.push_back(v);
    }

        string str=s.substr(0,i);
        if(ispalindrome(str,0,str.size())){
            v.push_back(str);
            partition(i+1,ans,v,s);
            v.pop_back();
        }
        partition(i+1,ans,v,s);
    
}

int main(){

    string s="aabb";
    vector<string>v;
    vector<vector<string>>ans;

    partition(0,ans,v,s);

    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            for(int k=0;k<ans[i][j].size();k++){
                cout<<ans[i][j][k]<<" ";
            }
            cout<<endl;
        }
    }

    return 0;
}