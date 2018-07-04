#include<iostream>
#include<cstring>
using namespace std;
int main(){
	char a[100];
	scanf("%s",a);
	int n=strlen(a);
	int n1=n/2,n2=n%2+2;
	while(n2<n1){
		n1--;
		n2+=2;
	}
	for(int i=0;i<n1-1;i++){
		printf("%c",a[i]);
		for(int j=0;j<n2-2;j++){
			printf("%c",' ');
		}
		printf("%c\n",a[n-1-i]);
	}
	for(int i=n1-1;i<n1+n2-1;i++){
		printf("%c",a[i]);
	}
	return 0;
} 
