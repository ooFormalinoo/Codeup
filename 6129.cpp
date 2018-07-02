#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int N,a[1010]={0};
	while(scanf("%d",&N)!=EOF){
		int a1_num=0,a2_num=0,a3_num=0,a4_num=0,a5_num=0;
		int a1=0,a2=0,a3=0,a4=0,a5=0;
		for(int i=0;i<N;i++){
			scanf("%d",&a[i]);
			switch(a[i]%5){
				case 0:a[i]%2==0?a1=a1+a[i],a1_num++:a1=a1;break;
				case 1:a2=a2+pow(-1,a2_num++)*a[i]; break;
				case 2:a3++;a3_num++;break;
				case 3:a4=a4+a[i];a4_num++;break;
				case 4:a[i]>a5?a5=a[i],a5_num++:a5_num++;break;
				default:break; 
			}
		}
			a1_num>0?printf("%d ",a1):printf("N ");
			a2_num>0?printf("%d ",a2):printf("N ");
			a3_num>0?printf("%d ",a3_num):printf("N ");
			a4_num>0?printf("%.1f ",(float)a4/a4_num):printf("N ");
			a5_num>0?printf("%d\n",a5):printf("N\n");
	}
} 
