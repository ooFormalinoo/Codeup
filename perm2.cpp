//利用STL函数实现全排列，字典序 
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int a[4]={1,2,3,4};
	next_permutation(a,a+4);//返回a的下一个序列
	prev_permutation(a,a+4);//返回a的上一个序列 
	do{
		for(int i=0;i<4;i++){
			cout<<a[i];
		} 
		cout<<endl;
	}while(next_permutation(a,a+4));
	return 0;
} 
