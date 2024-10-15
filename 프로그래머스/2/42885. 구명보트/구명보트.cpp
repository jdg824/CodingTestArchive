#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
#include <deque>

using namespace std;

bool cmp(int a, int b){
    return a> b;
}

int solution(vector<int> people, int limit) {
    int answer = 0;
    deque<int> dq;
    
    sort(people.begin(), people.end(), cmp);
    
    for(int i = 0; i<people.size(); i++)
        dq.push_back(people[i]);
    
    while(1){
        if(dq.size() == 0)
            break;
        
        if(dq.size() >=2){
            if(dq[0] + dq[dq.size() -1] <= limit){
                dq.pop_front();
                dq.pop_back();
            }
            else
                dq.pop_front();
        }
        else
            dq.pop_front();
        answer++;
    }
    
    return answer;
}