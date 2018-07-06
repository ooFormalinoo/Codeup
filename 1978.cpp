#include <iostream>
#include <algorithm>
using namespace std;
bool cmp(int a,int b){
    return a>b;
}
int main(){
    int m,first=1;
    while(scanf("%d",&m)!=EOF){
    	int a[15][15];
		int b[25]={0};
        for(int i=0;i<m;i++){
        	for(int j=0;j<m;j++){
        		scanf("%d",&a[i][j]);
			}
                
		}
        int cnt=0;
        for(int i=0;i<m;i++){
            int sum=0;
            for(int j=0;j<m;j++){
            	sum+=a[i][j];
			} 
            b[cnt++]=sum;
        }
        for(int j=0;j<m;j++){
            int sum=0;
            for(int i=0;i<m;i++){
            	sum+=a[i][j];	
			}
            b[cnt++]=sum;
        }
        int s1=0,s2=0;
        for(int i=0;i<m;i++) 
			s1+=a[i][i];
        b[cnt++]=s1;
        for(int i=0;i<m;i++) 
			s2+=a[i][m-1-i];
        b[cnt++]=s2;
        sort(b,b+cnt,cmp);
        for(int i=0;i<cnt;i++) printf("%d ",b[i]);
        cout<<endl;
    }
    return 0;
}

