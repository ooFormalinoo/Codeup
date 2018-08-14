#include<iostream>
using namespace std;
struct node{
	int data;
	node* left;
	node* right;
}; 
void insert(node *&root,int a){
	if(root==NULL){
		root=new node;
		root->data=a;
		root->left=root->right=NULL;
		return;
	}
	if(a<root->data) insert(root->left,a);
	if(a>root->data) insert(root->right,a);
}
void preOrder(node *root){
	if(root==NULL) return;
	printf("%d ",root->data);
	preOrder(root->left);
	preOrder(root->right);
}
void inOrder(node *root){
	if(root==NULL) return;
	inOrder(root->left);
	printf("%d ",root->data);
	inOrder(root->right);
}
void postOrder(node *root){
	if(root==NULL) return;
	postOrder(root->left);
	postOrder(root->right);
	printf("%d ",root->data);
}
int main(){
	int n;
	node  *root=new node;
	while(scanf("%d",&n)!=EOF){
		int a;
		root=NULL;
		for(int i=0;i<n;i++){
			scanf("%d",&a);
			insert(root,a);
		}
		preOrder(root);
		cout<<endl;
		inOrder(root);
		cout<<endl;
		postOrder(root);
		cout<<endl;
	}
	return 0;
}
