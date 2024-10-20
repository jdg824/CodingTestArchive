#include <string>
#include <vector>
#include <queue>

using namespace std;

vector<int> v[201];

bool chk[201] = {0,};

void bfs(int start){
    queue<int> q;
    
    q.push(start);
    chk[start] = 1;
    
    while(!q.empty()){
        int x = q.front();
        q.pop();
        
        for(int i=0; i<v[x].size(); i++){
            int rx = v[x][i];
            
            if(chk[rx] == 0){
                chk[rx] = 1;
                q.push(rx);
            }
        }
    }
}

int solution(int n, vector<vector<int>> computers) {
    int answer = 0;
    
    for(int i=0; i<computers.size(); i++){
        for(int j=0; j<computers[0].size(); j++){
            if(i != j){
                if(computers[i][j] == 1)
                    v[i].push_back(j);
            }
        }
    }
    
    for(int i=0; i<n; i++){
        if(chk[i] == 0){
            bfs(i);
            answer++;
        }
    }
    
    return answer;
}