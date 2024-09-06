#include <string>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

int solution(vector<int> priorities, int location) {
    int answer = 0;
    queue<int> q;
    
    for(int i=0; i<priorities.size(); i++){
        q.push(i);
    }
    
    int max = *max_element(priorities.begin(), priorities.end());
    int count = 1;
    
    while(1){
        int idx = q.front();
        
        if(priorities[idx] < max){
            q.pop();
            q.push(idx);
        }
        else{
            if(idx == location)
                return count;
            
            priorities[idx] = 0;
            count++;
            max = *max_element(priorities.begin(), priorities.end());
        }
    }
    
    return answer;
}