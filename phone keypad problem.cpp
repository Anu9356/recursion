#include<bits/stdc++.h>

using namespace std;

vector<string>ans;
void formsub(int i,string &x,string&s,int cnt){
    if(i==s.size()){
        if(x.size()==cnt&&(x[0]=='a'||x[0]=='b'||x[0]=='c'))
        ans.push_back(x);
        return;
    }
  
    if(i>s.size()&&x.size()!=cnt)return;
    
    
    x.push_back(s[i]);
    formsub(i+1,x,s,cnt);
    x.pop_back();
    formsub(i+1,x,s,cnt);
}

int main(){
      
      string s="abcdefghi";
      string x="";
      int cnt=3;
      formsub(0,x,s,cnt);

      for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j];
        }
        cout<<endl;
      }

    return 0;
}