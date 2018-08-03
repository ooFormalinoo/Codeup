#include<iostream>
#include<stack>
#include<map>
#include<queue>
using namespace std;

struct node{
	double num;
	char op;
	bool flag;//����Ϊ1������Ϊ0 
};

map<char,int> mp;

void change(string s,queue<node> &q){
	//��׺���ʽת��Ϊ��׺���ʽ�������ڶ���q��
	int i=0;
	stack<node> sp;//����ջ 
	while(i<s.length()){
		node temp;
		if(s[i]>='0'&&s[i]<='9'){
		//���������
			temp.num=s[i]-'0';
			temp.flag=1;
			i++;
			while(s[i]>='0'&&s[i]<='9'&&i<s.length()){
				temp.num=temp.num*10+s[i]-'0';
				i++;
			}
			q.push(temp);
		}
		else{
		//����Ƿ���
			temp.op=s[i];
			temp.flag=0;
			while(!sp.empty()&&mp[sp.top().op]>=mp[s[i]]){
				q.push(sp.top());
				sp.pop();
			}
			sp.push(temp);
			i++;
		}
	} 
	while(!sp.empty()){
		q.push(sp.top());
		sp.pop();
	}
}

double Cal(queue<node> &q){
	stack<node> ss;
	node temp1,temp2;
	while(!q.empty()){
		if(q.front().flag==1){
			ss.push(q.front());
			q.pop();
		}
		else{
			temp1=ss.top();
			ss.pop();
			temp2=ss.top();
			ss.pop();
			char p=q.front().op;
			switch(p){
				case '+': temp2.num=temp2.num+temp1.num;ss.push(temp2);break;
				case '-': temp2.num=temp2.num-temp1.num;ss.push(temp2);break;
				case '*': temp2.num=temp2.num*temp1.num;ss.push(temp2);break;
				case '/': temp2.num=temp2.num/temp1.num;ss.push(temp2);break;
				default:break;
			}
			q.pop();
		}
		
	}
	return ss.top().num;
}
int main(){
	string s;
	mp['+']=mp['-']=1;
	mp['/']=mp['*']=2;
	while(1){
		getline(cin,s);
		queue<node> q;
		if(s=="0") break;
		for(auto it=s.begin();it!=s.end();it++){
			if(*it==' ') s.erase(it);
		} 
		change(s,q);
		double ans=Cal(q);
		printf("%.2f\n",ans);
	}
	return 0;
}
