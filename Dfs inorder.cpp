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

void Inorder(Node *root){
    if(root==NULL) return;
    Inorder(root->left);
    cout<<root->data<<" ";
    Inorder(root->right);
}
int main(){
	Node *root= new Node(1);
	root->left= new Node(2);
	root->right=new Node(3);
	root->left->left=new Node(4);
	root->left->right=new Node(5);
	root->right->left=new Node(6);
	Inorder(root);
		
}
