//本题为2020，1935类似，稍作修改即可 
#include<iostream>
#include<cstring>
using namespace std;
struct student{
	char id[100];
	char name[10];
	char sex[10];
	int age;
	student(){
		strcpy(id,"0");
		strcpy(name,"0");
		strcpy(sex,"男");
		age=0; 
	}
	student(char a[],char b[],char c[],int d ){
		strcpy(id,a);
		strcpy(name,b);
		strcpy(sex,c);
		age=d; 
	}
}; 
int main(){
	int M;
	while(scanf("%d",&M)!=EOF){
		while(M--){
			int n=0;
			scanf("%d",&n);
			student stu[30];
			char id[100],name[10],sex[10];
			int age;
			for(int i=0;i<n;i++){
				scanf("%s%s%s%d\n",id,name,sex,&age);
				stu[i]=student(id,name,sex,age);
			}
			char x[30];
			scanf("%s",x);
			for(int i=0;i<n;i++){
				if(strcmp(stu[i].id,x)==0){
					printf("%s %s %s %d\n",stu[i].id,stu[i].name,
										   stu[i].sex,stu[i].age);
					break;
				}
			}
		}
	}
	return 0;
}
