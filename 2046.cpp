#include <iostream>
#include <cmath>
using namespace std;
int totalP[93][9];
int p[9]={0};
int mm=1;
bool hashTable[9]={false};
 
void generateP(int index){
    if (index == 9) {
        for (int i=1;i<=8;i++){
            totalP[mm][i] = p[i];
        }
        ++mm;
        return;
    }
    for (int i=1;i<=8;i++){
        if (hashTable[i]==false){
            bool flag = true;
            for (int j=1;j< index;j++){
                if (abs(index-j)==abs(p[j]-i)) {//ÅÐ¶Ï¶Ô½ÇÏß
                    flag = false;
                    break;
                }
            }
            if(flag){
                p[index]=i;
                hashTable[i]=true;
                generateP(index+1);
                hashTable[i]=false;
            }
        }
    }
}
int main()
{
    generateP(1);
    int n,m;
    while(scanf("%d",&n)!=EOF) {
        for(int i=1;i<=n;i++) {
            scanf("%d",&m);
            for(int j=1;j<=8;j++) {
                printf("%d",totalP[m][j]);
            }
            cout << endl;
        }
    }
    return 0;
}
