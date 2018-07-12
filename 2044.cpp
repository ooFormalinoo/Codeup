#include<iostream>
using namespace std;
int a[25]={0};//存放每个物品的体积
int fun(int sum,int i){//sum为总体积，i为物品个数 
	if(sum==0) return 1;
	else if(i==0) return 0;
	//由后向前递归，对于第i个，可以选择要或者不要 
	else return fun(sum-a[i],i-1)+fun(sum,i-1); 
} 
int main(){
	int N;
	while(scanf("%d",&N)!=EOF){
		for(int i=1;i<=N;i++){
			scanf("%d",&a[i]);
		}
		printf("%d\n",fun(40,N));
	} 
	return 0;
} 
