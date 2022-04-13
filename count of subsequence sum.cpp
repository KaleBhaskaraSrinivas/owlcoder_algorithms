#include<bits/stdc++.h>
using namespace std;
int PrintSubSeqs(int sum,int ind,int t,int n, int arr[]){
if(ind==n){
    if (sum==t) return 1;
    else return 0;
}
  //logic to make a pick
  sum+=arr[ind];
  int left=PrintSubSeqs(sum,ind+1,t,n,arr);
  sum-=arr[ind];
  //logic to not to pick
  int right=PrintSubSeqs(sum,ind+1,t,n,arr);
  return left+right;
}

int main(){
  int n,t;
  cin>>n>>t;
  int arr[n];
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
cout<< PrintSubSeqs(0,0,t,n,arr);
}
