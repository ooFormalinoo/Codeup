#include<iostream>
using namespace std;
int main(){
	int N,M;
	while(scanf("%d%d",&N,&M)!=EOF){
		int book[210]={0};//最喜欢第i本书的人数 
		int people[210]={0};//低i个人最喜欢的书
		for(int i=0;i<N;i++){
			int num=0;
			scanf("%d",&num);
			book[num]++;
			people[i]=num;
		}
		for(int i=0;i<N;i++){
			if(book[people[i]]>1) printf("%d\n",book[people[i]]-1);
			else printf("BeiJu\n");
		}
	} 
	return 0;
	
} 
