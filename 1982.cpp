#include<iostream>
#include<stack>
#include<string>
using namespace std;
int main(){
	int n;
	scanf("%d\n",&n);
	while(n--){
		bool ans=true;
		string s;
		stack<char> stk;
		getline(cin,s);
		for(auto it=s.begin();it!=s.end();it++){
			if(*it=='('||*it=='['||*it=='{'){
				stk.push(*it);
			}
			if(*it==')'){
				if(stk.empty()||stk.top()!='('){
					ans=false;
					break;
				}
				else stk.pop();
			}
			if(*it==']'){
				if(stk.empty()||stk.top()!='['){
					ans=false;
					break;
				}
				else stk.pop();
			}
			if(*it=='}'){
				if(stk.empty()||stk.top()!='{'){
					ans=false;
					break;
				}
				else stk.pop();
			}
		}
		while(!stk.empty()){
			ans=false;
			stk.pop();
		}
		if(ans) printf("yes\n");
		else printf("no\n");
	}
	return 0;
} 
