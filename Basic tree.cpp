#include<bits/stdc++.h>
using namespace std;
struct Node{
	Node *left,*right;
	int data;
	Node(int x){
		data=x;
		left=NULL;
		right=NULL;
	}
};
int main(){
	Node *root= new Node(10);
	root->left= new Node(20);
	root->right=new Node(30);
	root->right->left=new Node(40);
	cout<<root->right->data;
		
}
