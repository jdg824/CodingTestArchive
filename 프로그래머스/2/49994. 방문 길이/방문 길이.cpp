#include <string>
#include <map>

using namespace std;

int solution(string dirs) {
    map<string, int> m;
    int answer = 0;
    
    int x=0;
    int y=0;
    
    for(int i=0; i<dirs.size(); i++){
        string str = to_string(x)+to_string(y);
        int dx = x;
        int dy = y;
        
        if(dirs[i] == 'U')
            dx--;
        else if (dirs[i] == 'R')
            dy++;
        else if (dirs[i] == 'D')
            dx++;            
        else if (dirs[i] == 'L')
            dy--;
        
        if(dx>=-5 && dx<=5 && dy>=-5&&dy<=5){
            string dstr = to_string(dx) + to_string(dy);
            
            if(m[str+dstr] == 0 && m[dstr+str]==0){
                m[str+dstr]++;
                m[dstr+str]++;
                answer++;
            }
            
            x=dx;
            y=dy;
        }
    }
    return answer;
}