#include<iostream>
#include<cstring>
using namespace std;
int kkk=0;
struct node{
	char date;
	node *left,*right;
};
node* create(char s[]){
	if(s[kkk]=='#')
	{
		kkk++;
		return NULL;
	}
	node * p=new node;
	p->date=s[kkk];
	kkk++;
	p->left=create(s);
	p->right=create(s);
	return p;
}
void InOrder(node* root){
	if(root==NULL) return;
	InOrder(root->left);
	printf("%c ",root->date);
	InOrder(root->right);
}
int main(){
	char s[110];
	while(scanf("%s",s)!=EOF){
		node *root=create(s);
		InOrder(root);
		cout<<endl;
		kkk=0; 
	}
	return 0;
}
