#include<iostream>
using namespace std;
int a[25]={0};//���ÿ����Ʒ�����
int fun(int sum,int i){//sumΪ�������iΪ��Ʒ���� 
	if(sum==0) return 1;
	else if(i==0) return 0;
	//�ɺ���ǰ�ݹ飬���ڵ�i��������ѡ��Ҫ���߲�Ҫ 
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
