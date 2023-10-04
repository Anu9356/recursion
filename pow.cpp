#include<iostream>
using namespace std;

int pow(int x,int n){
    int ans;
     if(n==0){
        return 1;
     }
     if(n%2==0){
        ans=pow(x*x,n/2);
     }
     else{
        ans=x*pow(x,n-1);
     }
     return ans;
}

int main(){
    int x,n;
    cout<<"enter value of x,n";
    cin>>x>>n;
    cout<<pow(x,n);


    return 0;

}