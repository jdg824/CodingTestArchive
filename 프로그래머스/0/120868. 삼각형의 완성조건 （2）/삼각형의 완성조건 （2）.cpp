#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> sides) {
    int answer = 0;
    int cnt = 0;
    
    sort(sides.begin(), sides.end());
    
    for(int i = 1; i<=sides[1]; i++){
        if(sides[0] + i > sides[1])
            cnt++;
    }
    
    for(int i = sides[1]+1; ; i++){
        if(sides[0] + sides[1] > i)
            cnt++;
        if(sides[0]+sides[1] <= i)
            break;
    }
    
    return cnt;
}