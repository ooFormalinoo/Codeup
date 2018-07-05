#include<iostream>//////-32
#include<cstring>
using namespace std;
int main(){
	char x[110];
	while(gets(x)){
		int len=strlen(x);
		int flag=0;
		if(x[0]>='a'&&x[0]<='z'){
				x[0]=x[0]-32;

			}
		for(int i=1;i<len;i++){
			if(flag==1){
				if(x[i]>='a'&&x[i]<='z'){
					x[i]=x[i]-32;
				}
				flag=0;
			}
			else{
				if((x[i]==' ')||(x[i]=='\t')||(x[i]=='\r')||(x[i]=='\n')){
					flag=1;
				}
			}
		}
		printf("%s\n",x);
	}
}
