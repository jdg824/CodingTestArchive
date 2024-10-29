#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<string>> board, int h, int w) {
    int answer = 0;
    int dx[4] = {0,0,1,-1};
    int dy[4] = {1,-1,0,0};
    string chk = board[h][w];
    
    for(int i=0; i<4; i++){
        int x = h+dx[i];
        int y = w+dy[i];
        
        if(x>=0 && x<board.size() && y>=0 && y<board.size() && board[x][y] == chk)
            answer++;
    }
    
    return answer;
}