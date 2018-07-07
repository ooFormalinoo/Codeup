#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
struct student{
	char id[25];
	int sum;
	int num[15];
	int score;
	student(){
		score=0;
	}
};
bool cmp(student s1,student s2){
	if(s1.score==s2.score) return strcmp(s1.id,s2.id)<0;
	else return s1.score>s2.score;
}
int main(){
	int N,M,G;
	while(scanf("%d%d%d",&N,&M,&G)!=EOF){
		if(N==0) break;
		int s[15]={0};
		for(int i=0;i<M;i++){
			scanf("%d",&s[i]);
		}
		student stu[1010];
		int cnt=0;
		for(int i=0;i<N;i++){
			scanf("%s%d",stu[i].id,&stu[i].sum); 
			for(int j=0;j<stu[i].sum;j++){
				scanf("%d",&stu[i].num[j]);
				stu[i].score=stu[i].score+s[stu[i].num[j]-1];
			}
			if(stu[i].score>=G) cnt++;
		}
		sort(stu,stu+N,cmp);
		printf("%d\n",cnt);
		for(int i=0;i<cnt;i++){
			printf("%s %d\n",stu[i].id,stu[i].score);
		}
	}
	return 0;
}

