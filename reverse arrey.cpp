#include<iostream>

using namespace std;

void reverse(int n,int arr[],int i){
    if(i>=n/2)return;
    int temp=arr[n-i-1];
    arr[n-i-1]=arr[i];
    arr[i]=temp;
    reverse(n,arr,i+1);
}

int main(){
    int n;cout<<"enter n";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    reverse(n,arr,0);
    
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}