#include<iostream>
using namespace std;
int main(){
	int N;
	while(scanf("%d",&N)!=EOF){
		if(N==0) break;
		int a[101]={0};
		int s;
		for(int i=0;i<N;i++){
			scanf("%d",&s);
			a[s]++;
		}
		int d;
		scanf("%d",&d);
		printf("%d\n",a[d]);	
	}
	return 0;
} 
