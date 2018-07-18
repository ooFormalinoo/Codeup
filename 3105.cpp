#include<iostream>
using namespace std;
void merger(int a[],int l1,int r1,int l2,int r2){
	int temp[100010],index=0;
	int i=l1,j=l2;
	while(i<=r1&&j<=r2){
		if(a[i]<=a[j]){
			temp[index++]=a[i++];
		}else{
			temp[index++]=a[j++];
		}
	}
	while(i<=r1) temp[index++]=a[i++];
	while(j<=r2) temp[index++]=a[j++];
	for(int k=0;k<index;k++){
		a[l1+k]=temp[k];
	}
}
void mergerSort(int a[],int left,int right){
	if(left<right){
		int mid=(left+right)/2;
		mergerSort(a,left,mid);
		mergerSort(a,mid+1,right);
		merger(a,left,mid,mid+1,right);
	} 
}
int main(){
	int n;
	while(scanf("%d",&n)!=EOF){
		while(n--){
			int m;
			int a[100010]={0};
			scanf("%d",&m);
			for(int i=0;i<m;i++){
				scanf("%d",&a[i]);
			}
			mergerSort(a,0,m-1);
			for(int i=0;i<m;i++){
				printf("%d\n",a[i]);
			}
		}
	}
	return 0;
}
