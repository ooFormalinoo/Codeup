//全排列的递归算法,非字典序 
#include<iostream>
#include<algorithm>
using namespace std;
void perm(int res[],int bg,int end){
	if(bg==end){
		for(int i=0;i<=end;i++){
			printf("%d",res[i]);
		}
		cout<<endl;
		return;
	}
	else{
		for(int i=bg;i<=end;i++){
			swap(res[bg],res[i]);
			perm(res,bg+1,end);
			swap(res[bg],res[i]);
		}
	}
}
int main(){
	int a[5]={1,2,3,4,5};
	perm(a,0,4);
	return 0;
} 
