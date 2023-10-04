#include<bits/stdc++.h>
using namespace std;


void countstring(int i,string &x,string &s,map<string,int>&m){
    if(i==s.size()){
        if(m.find(x)==m.end()){
            m[x]++;
            return;
        }
        else
        return;
    }
    x.push_back(s[i]);
     countstring(i+1,x,s,m);
    x.pop_back();
     countstring(i+1,x,s,m);
}
int main(){
   
     string s="abcdef";
     string x="";
     map<string,int>m;
     countstring(0,x,s,m);
     for(auto i:m){
        cout<<i.first<<endl;
     }
    return 0;

}