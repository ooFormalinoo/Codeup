#include<iostream>
#include<cstring>
using namespace std;
struct stu{
		char id[1000000];
		char name[10000];
		char sex[5];
		int age;
		stu(){
			strcpy(id,"\0");
			strcpy(name,"\0");
			strcpy(sex,"\0");
			age =0;
		}
		stu(char a[],char b[],int c,char d[]){
			strcpy(id,a);
			strcpy(name,b);
			strcpy(sex,d);
			age=c;
		}
	};
int main(){
	int N,M;
	stu s[10100];
	scanf("%d\n",&N);
	for(int i=0;i<N;i++){	
		char id[1000000];
		char name[10000];
		char sex[5];
		int age;
		scanf("%s%s%s%d",id,name,sex,&age);
		s[i]=stu(id,name,age,sex);
	}
	scanf("%d",&M);
	for(int i=0;i<M;i++){
		char x[1000000];
		int j=0;
		scanf("%s",&x);
		for(j=0;j<N;j++){
			if(!strcmp(x,s[j].id)){
				printf("%s %s %s %d\n",
						s[j].id,s[j].name,s[j].sex,s[j].age);
				break;
			}
		}
		if(j==N) printf("No Answer!\n");
	}
	return 0;
}
