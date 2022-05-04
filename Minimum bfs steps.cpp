#include<bits/stdc++.h>
using namespace std;
int bfs(int start,int end,int n,int arr[]){
	queue<pair<int,int>>q;
	q.push({start,0});
	while(!q.empty()){
		auto it=q.front();
		int newstart=it.first;
		int steps=it.second;
		q.pop();
		for(int i=0;i<n;i++){
			if(newstart*arr[i]==end){
				return steps+1;
			}else{
				if(newstart*arr[i]<end){
					q.push({newstart*arr[i],steps+1});
				}
			}
		}
	}
	return -1;
}
int main()
{
	int arr[]={2,3,4};
	int start=3;
	int n=3;
	int end=48;
	int steps=bfs(start,end,n,arr);
	cout<<steps;
}
