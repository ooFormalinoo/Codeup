#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
struct mouse{
	int weight;
	char color[20];
	mouse(){
		weight=0;
		strcpy(color,"0");
	}
	mouse(int a,char b[]){
		weight=a;
		strcpy(color,b);
	}
}; 
bool cmp(mouse m1,mouse m2){
	return m1.weight>m2.weight;
}
int main(){
	int N;
	while(scanf("%d",&N)!=EOF){
		mouse m[110];
		for(int i=0;i<N;i++){
			scanf("%d %s",&m[i].weight,m[i].color);
		}
		sort(m,m+N,cmp);
		for(int i=0;i<N;i++){
			printf("%s\n",m[i].color);
		}
	}
	return 0;
}
