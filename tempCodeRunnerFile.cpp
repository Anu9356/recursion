#include<bits/stdc++.h>

using namespace std;


void solve(int index,int &target,string &num,string v,vector<string>&ans,int count){
         if(index==num.size()){
             if(count==target){
                 ans.push_back(v);
             }
             return ;
         }
          int n=0;
          string temp="";
         for(int i=index;i<num.size();i++){
              temp+=num[i];
              n=n*10+(num[i]-'0');
              if(index==0){
                  solve(i+1,target,num,temp,ans,n);
              }
              else{
              solve(i+1,target,num,v+"+"+temp,ans,count+n);
              solve(i+1,target,num,v+"-"+temp,ans,count-n);
              solve(i+1,target,num,v+"*"+temp,ans,count*n);
              }
              if(num[index]=='0')break;
         }
     }
    vector<string> addOperators(string num, int target) {
        string v="";
        vector<string >ans;

        solve(0,target,num,v,ans,0);
        return ans;
    }

    int main(){
        string s="123";
        int target=6;

        vector<string>ans=addOperators(s,target);

        for(int i=0;i<ans.size();i++){
            for(int j=0;j<ans[i].size();j++){
                cout<<ans[i][j];
            }
            cout<<endl;
        }
        return 0;
    }