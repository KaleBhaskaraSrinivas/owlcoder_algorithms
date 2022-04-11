#include<bits/stdc++.h>
using namespace std;
void PrintSubSeqs(int sum,int ind,int t,int n, vector<int>&ds, int arr[]){
if(ind==n){
    if (sum==t){
for(auto it : ds){
cout<<it<<" ";
}
}
  cout<<"\n";
  return;
}
  //logic to make a pick
  ds.push_back(arr[ind]);
  sum+=arr[ind];
  PrintSubSeqs(sum,ind+1,t,n,ds,arr);
  ds.pop_back();
  sum-=arr[ind];
  //logic to not to pick
  PrintSubSeqs(sum,ind+1,t,n,ds,arr);
}

int main(){
  int n,t;
  cin>>n>>t;
  int arr[n];
  int sum=0;
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  vector<int>ds;
  PrintSubSeqs(sum,0,t,n,ds,arr);
}
