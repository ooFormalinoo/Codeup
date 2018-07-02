//注意整数的范围即可，写的有点麻烦
//读入数据的时候可以直接按字符串读入不用sprintf函数转换
//生成Pa和Pb的时候可以*10累加，也不需要借助sscanf函数
#include<iostream>
#include<cmath>
#include<cstring>
using namespace std;
int main(){
	long long  a,Da,b,Db;
	while(scanf("%lld%lld%lld%lld",&a,&Da,&b,&Db)!=EOF){
		char str_a[15]={'0'},str_b[15]={'0'};
		char str_Pa[15]={'0'},str_Pb[15]={'0'};
		sprintf(str_a,"%lld",a);
		sprintf(str_b,"%lld",b);
		long long Pa=0,Pb=0;
		int k=0,j=0;
		for(int i=0;i<strlen(str_a);i++){
			if(str_a[i]==Da+'0'){
				str_Pa[k]=str_a[i];
				k++;
			}
		}
		str_Pa[k]='\0';
		for(int i=0;i<strlen(str_b);i++){
			if(str_b[i]==Db+'0'){
				str_Pb[j]=str_b[i];
				j++;
			}
		}
		str_Pb[j]='\0';
		sscanf(str_Pa,"%lld",&Pa);
		sscanf(str_Pb,"%lld",&Pb);
		printf("%lld\n",Pa+Pb);
		
	}
} 

