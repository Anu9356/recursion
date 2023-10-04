#include<iostream>

using namespace std;

// functional recursion
int sum(int n){
    if(n==0)return 0;
    return n+sum(n-1);
}
// parameterised recursion

void sum(int n,int s){
    if(n==0){
        cout<<s<<" ";
        return;
    }
    s=s+n;
    sum(n-1,s);
}


int main(){
     int n;
     cout<<"enter the value of n";
     cin>>n;
    // cout<<sum(n);
    sum(n,0);
    

    return 0;
}