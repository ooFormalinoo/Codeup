#include<iostream>
#include<cstring>
using namespace std;
int a[13][2]={0,0,31,31,28,29,31,31,30,30,31,31,30,30,
			      31,31,31,31,30,30,31,31,30,30,31,31};//每个月平年和闰年的天数
char m[13][20]={"","January","February","March","April",
	               "May","June","July","August","September",
	               "October","November","December"};			   				  	 
int rn(int x){//判断闰年 
	if(x%100==0){
		if(x%400==0) return 1;
		else return 0;
	}
	else{
		if(x%4==0) return 1;
		else return 0;
	}
}
int M2S(char s[]){//月份英文转成数字 
	for(int i=1;i<13;i++){
		if(strcmp(s,m[i])==0) return i;
	}  
} 
int main(){
	int d1,y1;char m1_c[20];
	int d2=5,m2=7,y2=2018;//今天星期四 
	while(scanf("%d%s%d",&d1,m1_c,&y1)!=EOF){
		int  m1=M2S(m1_c);
		int num=0,w=0;
		int flag=0;//标记输入日期是2018.7.5之前还是之后 
		if((y1>y2)||(y1==y2&&m1>m2)||(y1==y2&&m1==m2&&d1>d2)){
			flag=1;//flag置1说明输入日期在未来 
		}
		while((d1!=d2||m1!=m2||y1!=y2)&&flag==0){
			d1++;
			if(d1==a[m1][rn(y1)]+1){
					d1=1;m1++;
			}
			if(m1==13){
				y1++;m1=1;
			}
			num++;
		}
		while((d1!=d2||m1!=m2||y1!=y2)&&flag==1){
			d1--;
			if(d1==0){
					d1=a[m1][rn(y1)];m1--;
			}
			if(m1==0){
				y1--;m1=12;
			}
			num++;
		}
		w=num%7;
		if(flag==0){
			switch(w){
				case 0:printf("Thursday\n");break;
				case 1:printf("Wednesday\n");break;
				case 2:printf("Tuesday\n");break;
				case 3:printf("Monday\n");break;
				case 4:printf("Sunday\n");break;
				case 5:printf("Saturday\n");break;
				case 6:printf("Friday\n");break;
				default:break; 
			}
		}
		else{
			switch(w){
				case 6:printf("Wednesday\n");break;
				case 5:printf("Tuesday\n");break;
				case 4:printf("Monday\n");break;
				case 3:printf("Sunday\n");break;
				case 2:printf("Saturday\n");break;
				case 1:printf("Friday\n");break;
				case 0:printf("Thursday\n");break;
				default:break; 
			}	
		} 
		
	}
	return 0;
}
