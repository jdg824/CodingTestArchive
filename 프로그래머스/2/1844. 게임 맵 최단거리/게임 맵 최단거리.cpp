#include<vector>
#include <iostream>
#include <queue>

using namespace std;

int n,m;    //x y

int arr[101][101] = {0,};
bool chk[101][101] = {0,};
int graph[101][101] = {0,};

int dx[4]={0,0,-1,1};
int dy[4]={-1,1,0,0};

int bfs(int x, int y){
    queue<pair<int, int>>q;
    q.push({x, y});
    chk[x][y] = 1;
    
    while(!q.empty()){
        int rx = q.front().first;
        int ry = q.front().second;
        q.pop();
        
        for(int i=0; i<4; i++){
            int px = rx+dx[i];
            int py = ry+dy[i];
            
            if(px>=0 && px<n && py>=0 && py<m && chk[px][py] == 0 && arr[px][py] == 1){
                graph[px][py] = graph[rx][ry]+1;
                chk[px][py] =1;
                q.push({px, py});
            }
        }    
    }

    if(graph[n-1][m-1] == 0)
        return -1;
    else
        return graph[n-1][m-1]+1;
}

int solution(vector<vector<int>> maps)
{
    int answer=0;
    n = maps.size();
    m = maps[0].size();
    
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++)
            arr[i][j] = maps[i][j];
    }
    
    answer = bfs(0, 0);
    
    return answer;
}