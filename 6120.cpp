#include<iostream>
#include<cstring>
using namespace std;
int main(){
	char s1[10010];
	int cnt[150]={0};
	gets(s1);
	int len1=strlen(s1);
	while(1){
		char temp;
		scanf("%c",&temp);
		if(temp=='\n') break;
		cnt[temp]=1;
	}
	for(int i=0;i<len1;i++){
		if(cnt[s1[i]]==0) printf("%c",s1[i]);
	}
	return 0;
}
