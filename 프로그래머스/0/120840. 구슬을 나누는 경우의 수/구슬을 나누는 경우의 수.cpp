#include <string>
#include <vector>

using namespace std;

int num = 0;
int chk[31] = {0,};

int dfs(int num, int cnt, int balls, int share){
    if(cnt == share)
       num++;
    else{
        for(int i=num; i<=balls; i++){
            if(chk[cnt] == 0){
                chk[cnt] = 1;
                dfs(i, cnt+1, balls, share);
                chk[cnt] = 0;
            }
        }
    }
}

int solution(int balls, int share) {
    
    return dfs(1, 0, balls, share);
    
}