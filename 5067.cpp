#include<iostream>
using namespace std;
int partition(int a[],int left,int right){
	int temp=a[left];
	while(left<right){
		while(right>left&&a[right]>temp) right--;
		a[left]=a[right];
		while(left<right&&a[left]<temp) left++;
		a[right]=a[left];
	}
	a[left]=temp;
	return left;
}
int find(int a[],int left,int right,int k){
	if(left==right) return a[left];
	int p=partition(a,left,right);
	int m=p-left+1;
	if(k==m) return a[p];
	if(k<m){
		return find(a,left,p-1,k);
	}
	if(k>m){
		return find(a,p+1,right,k-m);
	}
}
int main(){
	int m,k;
	while(scanf("%d%d",&m,&k)!=EOF){
		int a[100010]={0};
		for(int i=0;i<m;i++){
			scanf("%d",&a[i]);
		}
		int ans=find(a,0,m-1,m-k+1);
		printf("%d\n",ans);
	}
	return 0;
}
