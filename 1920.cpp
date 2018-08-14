#include<iostream>
#include<string>
using namespace std;

string pre1;//原序列的先序序列 
string pre2;//待测序列的先序序列 

struct node{
	char data;
	node *left,*right;
};
void insert(node *&root,char a){
	if(root==NULL){
		root=new node;
		root->data=a;
		root->left=root->right=NULL;
		return;
	}
	if(a<root->data) insert(root->left,a);
	if(a>root->data) insert(root->right,a);
}
void preOrder1(node* root){
	if(root==NULL) return;
	pre1=pre1+root->data;
	preOrder1(root->left);
	preOrder1(root->right);
}
void preOrder2(node* root){
	if(root==NULL) return;
	pre2=pre2+root->data;
	preOrder2(root->left);
	preOrder2(root->right);
}
int main(){
	int n;
	string s;//原序列 
	node *root1;//原树 
	node *root2;//待测树 
	while(scanf("%d",&n)!=EOF){
		if(n==0) break;
		cin>>s;
		root1=NULL;
		for(auto it=s.begin();it!=s.end();it++){
			insert(root1,*it);
		}
		preOrder1(root1);
		string ss;//待测序列 
		while(n--){
			root2=NULL;
			cin>>ss;
			for(auto it=ss.begin();it!=ss.end();it++){
				insert(root2,*it);
			}
			preOrder2(root2);
			cout<<pre1<<' '<<pre2<<endl;
			if(pre1==pre2) printf("YES\n");
			else printf("NO\n");
			pre2.clear();
		}
		pre1.clear();
	}
	return 0;
}
