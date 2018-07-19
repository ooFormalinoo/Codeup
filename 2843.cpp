#include<iostream>
using namespace std;

int qsort(int a[],int left,int right){
	int i = left,j = right,temp = a[left];
    if(i<j){
        while(i<j){
        while(i<j && temp <a[j])
            j--;
        a[i] = a[j];
        while(i<j && temp >= a[i])
            i++;
        a[j] = a[i];
    }
    a[i] = temp;
    qsort(a,left,i-1);
    qsort(a,j+1,right);
    }
}
int main(){
	int n;
	while(scanf("%d",&n)!=EOF){
		int a[5010]={0};
		for(int i=0;i<n;i++){
			scanf("%d",&a[i]);
		}
		qsort(a,0,n-1);
		for(int i=0;i<n;i++){
			printf("%d\n",a[i]);
		}
	} 
}
