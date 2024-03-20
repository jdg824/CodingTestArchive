#include <iostream>
#include <string>
using namespace std;
 
bool visited[51][51];
char map[51][51];
int n,m;
bool is_find = false;
int dx[4] = {0,0,-1,1};
int dy[4] = {1,-1,0,0};
 int start_x = 0;
 int start_y = 0;
 
void input(){
    cin >> n >> m;
    for(int i = 0;i<n;i++){
        for(int j = 0;j<m;j++){
            cin >> map[i][j];
        }
    }
}
 
void init(){
 
    for(int i = 0;i<n;i++){
        for(int j = 0;j<m;j++){
            visited[i][j] = false;
        }
    }
}
 
void dfs(int x,int y,int depth){
    //깊이가 4 이상이고 (공이 4개이상이고) 시작점과 같은 좌표일 경우 사이클 존재
    if(depth >= 4 && x == start_x && y == start_y){
        is_find = true;
        return;
    }
 
    for(int i = 0;i<4;i++){
        int nx = x + dx[i];
        int ny = y + dy[i];
        if(nx < 0 || ny < 0 || nx >= n || ny >= m){
            continue;
        }
        //시작좌표의 색깔과 같은 색깔의 공이면 백트래킹
        if(map[nx][ny] == map[x][y] && visited[nx][ny] == false){
            visited[nx][ny] = true;
            dfs(nx,ny,depth+1);
            visited[nx][ny] = false;
        }
    }
}
 
int main(void){
    input();
    for(int i = 0;i<n;i++){
        for(int j = 0;j<m;j++){
            init(); //모든 방문 배열 초기화
            start_x = i; //시작점의 좌표 
            start_y = j;
 
            dfs(i,j,1); 
            //DFS를 돌려서 사이클 존재하는 경우
            if(is_find == true){
                cout << "Yes";
                return 0;
            }
        }
    }
 
    cout << "No";
 
}