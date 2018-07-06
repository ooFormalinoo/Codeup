#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
struct student{
	char id[10];
	char name[10];
	int score;
	student(){
		strcpy(id,"0");
		strcpy(name,"0");
		score=0;
	}
	student(char a[],char b[],int c){
		strcpy(id,a);
		strcpy(name,b);
		score=c;
	}
};
bool cmp1(student s1,student s2){
	return strcmp(s1.id,s2.id)<0;
}
bool cmp2(student s1,student s2){
	if(strcmp(s1.name,s2.name)==0)
		return strcmp(s1.id,s2.id)<0;
	else
		return strcmp(s1.name,s2.name)<0;
}
bool cmp3(student s1,student s2){
	if(s1.score==s2.score)
		return strcmp(s1.id,s2.id)<0;
	else
		return s1.score<s2.score;
}
int main(){
	int N;
	int cnt=0;
	while(scanf("%d",&N)!=EOF){
		if(N==0) break;
		int C;
		scanf("%d",&C);
		student *stu=new student[N];
		for(int i=0;i<N;i++){
			scanf("%s%s%d",&stu[i].id,&stu[i].name,&stu[i].score);
		}
		switch(C){
			case 1:sort(stu,stu+N,cmp1);break;
			case 2:sort(stu,stu+N,cmp2);break;
			case 3:sort(stu,stu+N,cmp3);break;
			default:break;
		}
		cnt++;
		printf("Case %d:\n",cnt);
		for(int i=0;i<N;i++){
			printf("%s %s %d\n",stu[i].id,stu[i].name,stu[i].score);
		}
		delete[] stu;
	}
	return 0;
}
