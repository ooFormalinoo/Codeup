#include<iostream>
#include<vector>
#include<string>
using namespace std;
struct node{
	char date;
	node *left,*right;
}; 
node* newNode(char c){
	node *root=new node;
	root->date=c;
	root->left=root->right=NULL;
	return root;
}
node* rebuild(string pre,string in,int prel,int prer,int inl,int inr){
	if(prel>prer) return NULL;
	node *root=new node;
	root->date=pre[prel];
	int k;
	for(k=inl;k<=inr;k++){
		if(in[k]==pre[prel]) break;
	}
	int numleft=k-inl;
	root->left=rebuild(pre,in,prel+1,prel+numleft,inl,k-1);
	root->right=rebuild(pre,in,prel+numleft+1,prer,k+1,inr);
	return root;
}
void post(node *root){
	if(root==NULL) return;
	post(root->left);
	post(root->right);
	printf("%c",root->date);
}
int main(){
	string s1,s2;
	while(cin>>s1>>s2){
		node *root=rebuild(s1,s2,0,s1.size()-1,0,s2.size()-1);
		post(root);
		cout<<endl;
	}
	return 0;
}
