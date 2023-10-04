#include<bits/stdc++.h>

using namespace std;

vector<string>ans;

void searchword(int i,int j,string &v,string &s,bool flag,vector<vector<char>>&str){
      if(v.size()==s.size()){
        ans.push_back(v);
        return;
      }
      if(i>0 &&j>0&&i<ans.size()&&ans[i].size()){
      s.push_back(str[i][j]);
      searchword(i-1,j,v,s,flag,str);
      s.push_back(str[i][j]);
      searchword(i+1,j,v,s,flag,str);
      s.push_back(str[i][j]);
      searchword(i,j+1,v,s,flag,str);
      s.push_back(str[i][j]);
      searchword(i,j-1,v,s,flag,str);
      }

}

int main(){

    vector<vector<char>> str{
        {'A','B','C','D'},
        {'S','F','C','S'},
        {'A','D','E','E'}
        };
        
        string s="ABCCED";
        string v="";
        bool flag=false;
        searchword(0,0,v,s,flag,str);

        for(int i=0;i<ans.size();i++){
            for(int j=0;j<ans[i].size();j++){
                cout<<ans[i][j];
            }cout<<endl;
        }
      

    return 0;
}