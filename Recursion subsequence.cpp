#include<bits/stdc++.h>
using namespace std;
void PrintSubSeqs(int ind,int n, vector<int>&ds, int arr[]){
if(ind==n){
for(auto it ds){
cout<<it<<" ";
}
  cout<<"\n";
  return;
}
  //logic to make a pick
  ds.push_back(arr[ind]);
  PrintSubSeqs(ind+1,n,ds,arr);
  ds.pop_back();
  //logic to not to pick
  PrintSubSeqs(ind+1,n,ds,arr);
}

int main(){
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  vector<int>ds;
  PrintSubSeqs(0,n,ds,arr)
}
