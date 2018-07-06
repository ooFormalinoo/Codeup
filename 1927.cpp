#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
int main(){
	char a[220];
	while(gets(a)){
		int len=strlen(a);
		sort(a,a+len);
		puts(a);
	}
	return 0;
} 
