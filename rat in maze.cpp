#include<bits/stdc++.h>
using namespace std;

 vector<string>ans;
    void solve(int i,int j,string &s,vector<vector<int>>&m,int n){
        if(i==n-1 && j==n-1 && m[i][j]==1){
            ans.push_back(s);
            return;
        }
        
        if(i<0||j<0||i>=n||j>=n||m[i][j]==0)return;
        
        m[i][j]=0;
        s.push_back('U');
        solve(i-1,j,s,m,n);
        s.pop_back();
        s.push_back('D');
        solve(i+1,j,s,m,n);
        s.pop_back();
        s.push_back('L');
        
        solve(i,j-1,s,m,n);
        s.pop_back();
        s.push_back('R');
        solve(i,j+1,s,m,n);
        s.pop_back();
        
        m[i][j]=1;
    }
    vector<string> findPath(vector<vector<int>> &m, int n) {
        // Your code goes here
        string s="";
        solve(0,0,s,m,n);
        return ans;
    }

int main(){

    vector<vector<int>>m{{1, 0, 0, 0},
         {1, 1, 0, 1}, 
         {1, 1, 0, 0},
         {0, 1, 1, 1}};

         vector<string>v;
         v={(findPath(m,m.size()))};

}

