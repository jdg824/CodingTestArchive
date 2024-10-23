#include <string>
#include <vector>
#include <iostream>
#include <queue>

using namespace std;

int v[1000001] = {0,};
bool chk[1000001] = {0,};

void bfs(int start, int limit, int mv[3]){
    queue<int> q;
    
    q.push(start);
    chk[start] = 1;
    
    while(!q.empty()){
        int x = q.front();
        q.pop();
        
        for(int i=0; i<3; i++){
            int rx;
            
            if(i >=0 && i<=1)
                rx = x*mv[i];
            else
                rx = x+mv[i];
            
            if(rx <= limit && chk[rx] == 0){
                q.push(rx);
                chk[rx]= 1;
                v[rx] = v[x]+1;
            }
        }
    }
}

int solution(int x, int y, int n) {
    int answer = 0;
    int mv[3] = {2, 3, n};
    
    if(x != y){
        bfs(x, y, mv);
    
        if(v[y] == 0)
            return -1;
        else
            return v[y];
    }
    else
        return 0;
}