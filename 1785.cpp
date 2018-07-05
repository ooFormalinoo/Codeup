#include<iostream>
using namespace std;
int main(){
	char a[110],b[110];
	while(scanf("%s%s",a,b)!=EOF){
		char c[220];
		int i=0,k=0;
		while(a[i]!='\0'){
			c[i]=a[i];
			i++;
		}
		while(b[k]!='\0'){
			c[i]=b[k];
			i++;
			k++;
		}
		c[i]='\0';
		printf("%s\n",c);	
	} 
	return 0;
	 
}
