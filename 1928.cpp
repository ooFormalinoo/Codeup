#include<iostream>
using namespace std;
int a[13][2]={0,0,31,31,28,29,31,31,30,30,31,31,30,30,
			      31,31,31,31,30,30,31,31,30,30,31,31};//每个月平年和闰年的天数 
int rn(int x){
	if(x%100==0){
		if(x%400==0) return 1;
		else return 0;
	}
	else{
		if(x%4==0) return 1;
		else return 0;
	}
} 
int main(){
	int x1,x2;
	while(scanf("%d%d",&x1,&x2)!=EOF){
		if(x1>x2){
			int temp=x1;x1=x2;x2=temp;
		}
		int y1,m1,d1,y2,m2,d2;
		d1=x1%100;m1=(x1/100)%100;y1=x1/10000;
		d2=x2%100;m2=(x2/100)%100;y2=x2/10000;
		int num=1;
		while(d1!=d2||m1!=m2||y1!=y2){
			d1++;
			if(d1==a[m1][rn(y1)]+1){
					d1=1;m1++;
			}
			if(m1==13){
				y1++;m1=1;
			}
			num++;
		}
		printf("%d\n",num);
	}
}
