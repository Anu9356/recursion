#include<iostream>

using namespace std;

void print1(int n){
    if(n==0)return;
    cout<<n<<" ";
    print1(n-1);
}
void print2(int n){
    if(n==0)return;
    print2(n-1);
    cout<<n<<" ";
}
int sum(int n){
    if(n==0)return 0;
    return n+sum(n-1);
}


int main(){
     int n;
     cout<<"enter the value of n";
     cin>>n;
    // print1(n);
    // print2(n);
    cout<<sum(n);
    

    return 0;
}