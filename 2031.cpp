#include<iostream>
#include<algorithm>
using namespace std;
struct station{
	double price;
	double dis;
} sta[510];

bool cmp(station s1,station s2){
	if(s1.dis!=s2.dis) return s1.dis<s2.dis;
	else return s1.price<s2.price;
}
int findmin(int bgn,int end){
	int min=sta[bgn].price;
	int res=bgn;
	for(int i=bgn+1;i<=end;i++){
		if(sta[i].price<=min){
			res=i;break;
		}
	}
	return res;
}
int getrange(int pos,int d,int N){
	int p;
	for(int i=pos;i<=N;i++){
		if(sta[i].dis-sta[pos].dis<=d){
			p=i;
		}
	}
	return p;
}
int main(){
	double C,D,DA;int N;
	scanf("%lf%lf%lf%d",&C,&D,&DA,&N);
	for(int i=0;i<N;i++){
		scanf("%lf%lf",&sta[i].price,&sta[i].dis);
	}
	sta[N].dis=D;sta[N].price=0.0;
	sort(sta,sta+N+1,cmp);
	if(sta[0].dis!=0){
		cout<<"The maximum travel distance = 0.00"<<endl;
		return 0;
	}
	int curpos=0,nextpos=0;
	double cc=0.0;
	double cost=0;
	while(nextpos!=N){
		
		int r=getrange(curpos,C*DA,N);
		if(r==curpos){
			double x=0;
			for(int i=1;i<=curpos;i++){
				x+=sta[i].dis;
			}
			x+=C*DA;
			printf("The maximum travel distance = %.2f\n",x);
			return 0;
		}
		else{
			int temp=findmin(curpos,r);
			if(temp!=curpos){
				nextpos=temp;
				if((sta[nextpos].dis-sta[curpos].dis)/DA-cc>=0){
					cost=cost+sta[curpos].price*((sta[nextpos].dis-sta[curpos].dis)/DA-cc);
					cc=0;
					curpos=nextpos;	
				}
				else{
					cc=cc-(sta[nextpos].dis-sta[curpos].dis)/DA;
					curpos=nextpos;
				}
			}
			else{
				nextpos=findmin(curpos+1,r);
				cost=cost+sta[curpos].price*(C-cc);
				cc=C-(sta[nextpos].dis-sta[curpos].dis)/DA;
				curpos=nextpos;
			}
		}
		
	}
	printf("%.2f\n",cost);
	return 0;
}
