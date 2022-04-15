#include<bits/stdc++.h>
using namespace std;
void Permutations(int n,int arr[],vector<int>&ds,int vis[]){
    if(n==ds.size())
    {
        for(auto it:ds)
        {
            cout<<it<<" ";
        }
        cout<<"\n";
        return;
    }
    for(int i=0;i<n;i++)
    {
        if(vis[i]==0)
        {
            vis[i]=1;
            ds.push_back(arr[i]);
            Permutations(n,arr,ds,vis);
            vis[i]=0;
            ds.pop_back();
        }
    }
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    vector<int>ds;
    int vis[n]={0};
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    Permutations(n,arr,ds,vis);
    return 0;
}
