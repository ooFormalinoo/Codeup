//����STL����ʵ��ȫ���У��ֵ��� 
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int a[4]={1,2,3,4};
	next_permutation(a,a+4);//����a����һ������
	prev_permutation(a,a+4);//����a����һ������ 
	do{
		for(int i=0;i<4;i++){
			cout<<a[i];
		} 
		cout<<endl;
	}while(next_permutation(a,a+4));
	return 0;
} 