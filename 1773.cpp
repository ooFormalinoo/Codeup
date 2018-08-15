#include<iostream>
#include<algorithm>
using namespace std;
struct node{
	int data;
	int height;
	node* left;
	node* right;
};
node* newNode(int a){
	node* root=new node;
	root->data=a;
	root->height=1;
	root->left=root->right=NULL;
	return root;
}
int getHeight(node* root){
	if(root==NULL) return 0;
	return root->height;
}
int getBalance(node* root){
	if(!root) return 0;
	return getHeight(root->left)-getHeight(root->right);
}
void updateHeight(node* root){
	root->height=max(getHeight(root->left),getHeight(root->right))+1;
}
void R(node* &root){
	node *temp=root->left;
	root->left=temp->right;
	temp->right=root;
	updateHeight(root);
	updateHeight(temp);
	root=temp;
}
void L(node* &root){
	node *temp=root->right;
	root->right=temp->left;
	temp->left=root;
	updateHeight(root);
	updateHeight(temp);
	root=temp;
}
void insert(node* &root,int a){
	if(root==NULL){
		root=newNode(a);
		return;
	}
	if(root->data==a) return;
	else if(a<root->data){
		insert(root->left,a);
		updateHeight(root);
		if(getBalance(root)==2){
			if(getBalance(root->left)==1){
				R(root);
			}
			else if(getBalance(root->left)==-1){
				L(root->left);
				R(root);
			}
		}
	}
	else{
		insert(root->right,a);
		updateHeight(root);
		if(getBalance(root)==-2){
			if(getBalance(root->left)==-1){
				L(root);
			}
			else if(getBalance(root->left)==1){
				R(root->left);
				L(root);
			}
		}
	}
}
bool search(node* root,int a){
	if(root==NULL) return false;
	if(a==root->data) return true;
	else if(a>root->data) search(root->right,a);
	else search(root->left,a);
}
void destroyTree(node * &root)
{
    if(!root)return;
    destroyTree(root->left);
    destroyTree(root->right);
    delete root;
    root = NULL;
}
int main(){
	int n,k;
	while(scanf("%d%d",&n,&k)!=EOF){
		node *root=NULL;
		for(int i=0;i<n;i++){
			int x;
			scanf("%d",&x);
			insert(root,x);
		}
		for(int i=0;i<k;i++){
			int c;
			scanf("%d",&c);
			if(search(root,c)) printf("1 ");
			else printf("0 ");
		}
		destroyTree(root);
		cout<<endl;
	}
	return 0;
}
