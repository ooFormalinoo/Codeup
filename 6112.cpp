#include<iostream>
using namespace std;
int main(){
	int N;
	while(scanf("%d",&N)!=EOF){
		int value[100010];
		int cnt[10010]={0};
		for(int i=0;i<N;i++){
			scanf("%d",&value[i]);
			cnt[value[i]]++;
		}
		int i;
		for(i=0;i<N;i++){
			if(cnt[value[i]]==1){
				printf("%d\n",value[i]);break;
			}
		}
		if(i==N) printf("None\n");
	}
	return 0;
} 
