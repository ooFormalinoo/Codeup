#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
bool cmp(string s1,string s2){
	if(s1.length()!=s2.length()) return s1.length()<s2.length();
	else return s1<s2;
}
int main(){
	int n;
	while(scanf("%d",&n)!=EOF){
		string str[110];
		for(int i=0;i<n;i++){
			cin>>str[i];
		}
		sort(str,str+n,cmp);
		for(int i=0;i<n;i++){
			printf("%s\n",str[i].c_str());
		}
	}
	return 0;
}
