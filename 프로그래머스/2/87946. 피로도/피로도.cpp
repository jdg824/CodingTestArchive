#include <string>
#include <vector>

using namespace std;

bool chk[9] = {0,};
int ans = 0;

int dfs(vector<vector<int>> dungeons, int value, int cnt){
    ans = max(ans, cnt);
    
    for(int i=0; i<dungeons.size(); i++){
        if(chk[i] == 0 && dungeons[i][0] <= value){
            chk[i] = 1;
            dfs(dungeons, value-dungeons[i][1], cnt+1);
            chk[i] = 0;
        }
    }
    
    return ans;
}

int solution(int k, vector<vector<int>> dungeons) {
    int answer = dfs(dungeons, k, 0);
    return answer;
}