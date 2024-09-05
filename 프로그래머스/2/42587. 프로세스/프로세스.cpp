#include <string>
#include <vector>
#include <algorithm>
#include <queue>
#include <iostream>

using namespace std;

int solution(vector<int> priorities, int location) {
    queue<int> q;
    int answer = 0;
    int max = *max_element(priorities.begin(), priorities.end());
    
    for(int i =0; i< priorities.size(); i++)
        q.push(i);
    
    int count = 1;
    while(1){
        int num = q.front();
        
        if(priorities[num] < max){
            q.push(num);
            q.pop();
        }
        else{
            if(num == location)
                return count;
            
            priorities[num] = 0;
            max = *max_element(priorities.begin(), priorities.end());
            count++;
            q.pop();
        }
    }
    
    
    return answer;
}